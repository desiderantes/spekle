/* spek-fft.c
 *
 * Copyright (C) 2010  Alexander Kojevnikov <alexander@kojevnikov.com>
 *
 * Spek is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Spek is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Spek.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <math.h>
#include <libavutil/mem.h>

#include "spek-fft.h"

SpekFftPlan * spek_fft_plan_new (gint n, gint threshold) {
	gint bits;
	SpekFftPlan *p = g_new0 (SpekFftPlan, 1);
	p->input = av_mallocz (sizeof (gfloat) * n);
	p->output = av_mallocz (sizeof (gfloat) * (n / 2 + 1));
	p->threshold = threshold;
	for (bits = 0; n; n >>= 1, bits++);
	p->n = 1 << --bits;
	p->cx = av_rdft_init (bits, DFT_R2C);
	return p;
}

void spek_fft_execute (SpekFftPlan *p) {
	int i;
	int n = p->n;

	av_rdft_calc (p->cx, p->input);

	/* Calculate magnitudes */
	p->output[0] = p->input[0] * p->input[0] / (n * n);
	p->output[n / 2] = p->input[1] * p->input[1] / (n * n);
	for (i = 1; i < n / 2; i++) {
		gfloat val;
		val = p->input[i * 2] * p->input[i * 2] + p->input[i * 2 + 1] * p->input[i * 2 + 1];
		val /= n * n;
		val = 10.0 * log10f (val);
		p->output[i] = val < p->threshold ? p->threshold : val;
	}
}

void spek_fft_destroy (SpekFftPlan *p) {
	av_rdft_end (p->cx);
	av_free (p->input);
	av_free (p->output);
	g_free (p);
}
