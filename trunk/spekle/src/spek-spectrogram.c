/* spek-spectrogram.c generated by valac, the Vala compiler
 * generated from spek-spectrogram.vala, do not modify */

/* spek-spectrogram.vala
 *
 * Copyright (C) 2010  Alexander Kojevnikov <alexander@kojevnikov.com>
 * Copyright (C) 2010  Niels Mayer ( http://nielsmayer.com )
 *
 * Spekle is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Spekle is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Spekle.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include <cairo.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <config.h>
#include <glib/gi18n-lib.h>
#include <pango/pangocairo.h>
#include <pango/pango.h>


#define SPEK_TYPE_SPECTROGRAM (spek_spectrogram_get_type ())
#define SPEK_SPECTROGRAM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPEK_TYPE_SPECTROGRAM, SpekSpectrogram))
#define SPEK_SPECTROGRAM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPEK_TYPE_SPECTROGRAM, SpekSpectrogramClass))
#define SPEK_IS_SPECTROGRAM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPEK_TYPE_SPECTROGRAM))
#define SPEK_IS_SPECTROGRAM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPEK_TYPE_SPECTROGRAM))
#define SPEK_SPECTROGRAM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPEK_TYPE_SPECTROGRAM, SpekSpectrogramClass))

typedef struct _SpekSpectrogram SpekSpectrogram;
typedef struct _SpekSpectrogramClass SpekSpectrogramClass;
typedef struct _SpekSpectrogramPrivate SpekSpectrogramPrivate;

#define SPEK_TYPE_PIPELINE (spek_pipeline_get_type ())
#define SPEK_PIPELINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPEK_TYPE_PIPELINE, SpekPipeline))
#define SPEK_PIPELINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPEK_TYPE_PIPELINE, SpekPipelineClass))
#define SPEK_IS_PIPELINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPEK_TYPE_PIPELINE))
#define SPEK_IS_PIPELINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPEK_TYPE_PIPELINE))
#define SPEK_PIPELINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPEK_TYPE_PIPELINE, SpekPipelineClass))

typedef struct _SpekPipeline SpekPipeline;
typedef struct _SpekPipelineClass SpekPipelineClass;
#define _cairo_surface_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_surface_destroy (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _spek_pipeline_unref0(var) ((var == NULL) ? NULL : (var = (spek_pipeline_unref (var), NULL)))
#define _cairo_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_destroy (var), NULL)))
#define _pango_font_description_free0(var) ((var == NULL) ? NULL : (var = (pango_font_description_free (var), NULL)))

#define SPEK_TYPE_RULER (spek_ruler_get_type ())
#define SPEK_RULER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPEK_TYPE_RULER, SpekRuler))
#define SPEK_RULER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPEK_TYPE_RULER, SpekRulerClass))
#define SPEK_IS_RULER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPEK_TYPE_RULER))
#define SPEK_IS_RULER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPEK_TYPE_RULER))
#define SPEK_RULER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPEK_TYPE_RULER, SpekRulerClass))

typedef struct _SpekRuler SpekRuler;
typedef struct _SpekRulerClass SpekRulerClass;
typedef struct _Block2Data Block2Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

struct _SpekSpectrogram {
	GObject parent_instance;
	SpekSpectrogramPrivate * priv;
};

struct _SpekSpectrogramClass {
	GObjectClass parent_class;
};

struct _SpekSpectrogramPrivate {
	gint my_width;
	gint my_height;
	gint seg_count;
	gint last_count;
	cairo_surface_t* my_image;
	gboolean got_media_info;
	char* _file_name;
	SpekPipeline* pipeline;
	char* info;
	cairo_surface_t* image;
	cairo_surface_t* palette;
	double FONT_SCALE;
};

typedef void (*SpekPipelineCallback) (gint sample, float* values, int values_length1, void* user_data);
typedef double (*SpekRulerUnitToPixel) (gint unit, void* user_data);
typedef char* (*SpekRulerFormatTick) (gint unit, void* user_data);
struct _Block2Data {
	int _ref_count_;
	Block1Data * _data1_;
	gint duration_seconds;
	gint freq;
};

struct _Block1Data {
	int _ref_count_;
	SpekSpectrogram * self;
	double w;
	double h;
};


static gpointer spek_spectrogram_parent_class = NULL;

GType spek_spectrogram_get_type (void) G_GNUC_CONST;
gpointer spek_pipeline_ref (gpointer instance);
void spek_pipeline_unref (gpointer instance);
GParamSpec* spek_param_spec_pipeline (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void spek_value_set_pipeline (GValue* value, gpointer v_object);
void spek_value_take_pipeline (GValue* value, gpointer v_object);
gpointer spek_value_get_pipeline (const GValue* value);
GType spek_pipeline_get_type (void) G_GNUC_CONST;
#define SPEK_SPECTROGRAM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SPEK_TYPE_SPECTROGRAM, SpekSpectrogramPrivate))
enum  {
	SPEK_SPECTROGRAM_DUMMY_PROPERTY,
	SPEK_SPECTROGRAM_FILE_NAME
};
#define SPEK_SPECTROGRAM_THRESHOLD (-92)
#define SPEK_SPECTROGRAM_NFFT 2048
#define SPEK_SPECTROGRAM_BANDS ((SPEK_SPECTROGRAM_NFFT / 2) + 1)
#define SPEK_SPECTROGRAM_LPAD 60
#define SPEK_SPECTROGRAM_TPAD 60
#define SPEK_SPECTROGRAM_RPAD 60
#define SPEK_SPECTROGRAM_BPAD 40
#define SPEK_SPECTROGRAM_GAP 10
#define SPEK_SPECTROGRAM_RULER 10
static guint32 spek_spectrogram_get_color (SpekSpectrogram* self, double level);
static void spek_spectrogram_put_pixel (SpekSpectrogram* self, cairo_surface_t* surface, gint x, gint y, guint32 color);
SpekSpectrogram* spek_spectrogram_new (void);
SpekSpectrogram* spek_spectrogram_construct (GType object_type);
static void spek_spectrogram_set_file_name (SpekSpectrogram* self, const char* value);
static void spek_spectrogram_start (SpekSpectrogram* self);
void spek_spectrogram_open (SpekSpectrogram* self, const char* file_name);
double spek_pipeline_get_duration (SpekPipeline* self);
gboolean spek_spectrogram_still_processing_p (SpekSpectrogram* self);
const char* spek_spectrogram_get_file_name (SpekSpectrogram* self);
const char* spek_pipeline_get_description (SpekPipeline* self);
static void spek_spectrogram_draw (SpekSpectrogram* self, cairo_t* cr);
void spek_spectrogram_save (SpekSpectrogram* self);
void spek_pipeline_stop (SpekPipeline* self);
static void spek_spectrogram_data_cb (SpekSpectrogram* self, gint sample, float* values, int values_length1);
static void _spek_spectrogram_data_cb_spek_pipeline_callback (gint sample, float* values, int values_length1, gpointer self);
SpekPipeline* spek_pipeline_new (const char* file_name, gint bands, gint samples, gint threshold, SpekPipelineCallback cb, void* cb_target);
SpekPipeline* spek_pipeline_construct (GType object_type, const char* file_name, gint bands, gint samples, gint threshold, SpekPipelineCallback cb, void* cb_target);
void spek_pipeline_start (SpekPipeline* self);
static double _lambda0_ (gint unit, Block2Data* _data2_);
static double __lambda0__spek_ruler_unit_to_pixel (gint unit, gpointer self);
static char* _lambda1_ (gint unit, SpekSpectrogram* self);
static char* __lambda1__spek_ruler_format_tick (gint unit, gpointer self);
SpekRuler* spek_ruler_new (const char* sample_label, gint* factors, int factors_length1, gint units, double spacing, SpekRulerUnitToPixel unit_to_pixel, void* unit_to_pixel_target, SpekRulerFormatTick format_tick, void* format_tick_target);
SpekRuler* spek_ruler_construct (GType object_type, const char* sample_label, gint* factors, int factors_length1, gint units, double spacing, SpekRulerUnitToPixel unit_to_pixel, void* unit_to_pixel_target, SpekRulerFormatTick format_tick, void* format_tick_target);
GType spek_ruler_get_type (void) G_GNUC_CONST;
void spek_ruler_draw (SpekRuler* self, cairo_t* cr, PangoLayout* layout, gboolean horizontal);
gint spek_pipeline_get_sample_rate (SpekPipeline* self);
static double _lambda2_ (gint unit, Block2Data* _data2_);
static double __lambda2__spek_ruler_unit_to_pixel (gint unit, gpointer self);
static char* _lambda3_ (gint unit, SpekSpectrogram* self);
static char* __lambda3__spek_ruler_format_tick (gint unit, gpointer self);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (Block2Data* _data2_);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (Block1Data* _data1_);
static void spek_spectrogram_finalize (GObject* obj);
static void spek_spectrogram_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void spek_spectrogram_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);



SpekSpectrogram* spek_spectrogram_construct (GType object_type) {
	SpekSpectrogram * self;
	char* _tmp0_;
	gboolean _tmp1_;
	cairo_surface_t* _tmp2_;
	self = (SpekSpectrogram*) g_object_new (object_type, NULL);
	if ((_tmp1_ = g_str_has_prefix (_tmp0_ = g_utf8_strdown (HOST_OS, -1), "darwin"), _g_free0 (_tmp0_), _tmp1_)) {
		self->priv->FONT_SCALE = 1.4;
	}
	self->priv->palette = (_tmp2_ = cairo_image_surface_create (CAIRO_FORMAT_RGB24, SPEK_SPECTROGRAM_RULER, SPEK_SPECTROGRAM_BANDS), _cairo_surface_destroy0 (self->priv->palette), _tmp2_);
	{
		gint y;
		y = 0;
		{
			gboolean _tmp3_;
			_tmp3_ = TRUE;
			while (TRUE) {
				guint32 color;
				if (!_tmp3_) {
					y++;
				}
				_tmp3_ = FALSE;
				if (!(y < SPEK_SPECTROGRAM_BANDS)) {
					break;
				}
				color = spek_spectrogram_get_color (self, y / ((double) SPEK_SPECTROGRAM_BANDS));
				{
					gint x;
					x = 0;
					{
						gboolean _tmp4_;
						_tmp4_ = TRUE;
						while (TRUE) {
							if (!_tmp4_) {
								x++;
							}
							_tmp4_ = FALSE;
							if (!(x < SPEK_SPECTROGRAM_RULER)) {
								break;
							}
							spek_spectrogram_put_pixel (self, self->priv->palette, x, y, color);
						}
					}
				}
			}
		}
	}
	return self;
}


SpekSpectrogram* spek_spectrogram_new (void) {
	return spek_spectrogram_construct (SPEK_TYPE_SPECTROGRAM);
}


void spek_spectrogram_open (SpekSpectrogram* self, const char* file_name) {
	char* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (file_name != NULL);
	spek_spectrogram_set_file_name (self, file_name);
	self->priv->info = (_tmp0_ = g_strdup (""), _g_free0 (self->priv->info), _tmp0_);
	spek_spectrogram_start (self);
}


gboolean spek_spectrogram_still_processing_p (SpekSpectrogram* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	if (!self->priv->got_media_info) {
		if (spek_pipeline_get_duration (self->priv->pipeline) > 10000) {
			self->priv->my_width = (gint) (spek_pipeline_get_duration (self->priv->pipeline) / 10);
		} else {
			if (spek_pipeline_get_duration (self->priv->pipeline) > 1000) {
				self->priv->my_width = (gint) spek_pipeline_get_duration (self->priv->pipeline);
			} else {
				if (spek_pipeline_get_duration (self->priv->pipeline) > 100) {
					self->priv->my_width = ((gint) spek_pipeline_get_duration (self->priv->pipeline)) * 10;
				} else {
					if (spek_pipeline_get_duration (self->priv->pipeline) > 10) {
						self->priv->my_width = ((gint) spek_pipeline_get_duration (self->priv->pipeline)) * 50;
					} else {
						if (spek_pipeline_get_duration (self->priv->pipeline) > 0) {
							self->priv->my_width = ((gint) spek_pipeline_get_duration (self->priv->pipeline)) * 100;
						} else {
							self->priv->my_width = -1;
						}
					}
				}
			}
		}
		if (self->priv->my_width > 0) {
			cairo_surface_t* _tmp0_;
			self->priv->got_media_info = TRUE;
			self->priv->my_image = (_tmp0_ = cairo_image_surface_create (CAIRO_FORMAT_RGB24, self->priv->my_width, self->priv->my_height), _cairo_surface_destroy0 (self->priv->my_image), _tmp0_);
		}
	}
	if (self->priv->last_count == self->priv->seg_count) {
		self->priv->last_count = self->priv->seg_count;
		result = FALSE;
		return result;
	} else {
		self->priv->last_count = self->priv->seg_count;
		result = TRUE;
		return result;
	}
}


void spek_spectrogram_save (SpekSpectrogram* self) {
	char* iname;
	char* _tmp0_;
	cairo_t* _tmp1_;
	g_return_if_fail (self != NULL);
	iname = g_path_get_basename (self->priv->_file_name);
	iname = (_tmp0_ = g_strconcat (iname, ".png", NULL), _g_free0 (iname), _tmp0_);
	g_print (_ ("SpekApp: drawing %.2f s.'%s'"), spek_pipeline_get_duration (self->priv->pipeline), spek_pipeline_get_description (self->priv->pipeline));
	spek_spectrogram_draw (self, _tmp1_ = cairo_create (self->priv->my_image));
	_cairo_destroy0 (_tmp1_);
	g_print (_ (". DONE!\nSpekApp: saving '%s'.."), iname);
	cairo_surface_write_to_png (self->priv->my_image, iname);
	g_print ("%s", _ (". DONE!\n"));
	_g_free0 (iname);
}


static void _spek_spectrogram_data_cb_spek_pipeline_callback (gint sample, float* values, int values_length1, gpointer self) {
	spek_spectrogram_data_cb (self, sample, values, values_length1);
}


static void spek_spectrogram_start (SpekSpectrogram* self) {
	gint samples;
	g_return_if_fail (self != NULL);
	if (self->priv->pipeline != NULL) {
		spek_pipeline_stop (self->priv->pipeline);
	}
	g_print ("%s", _ ("SpekApp: start()ing...\n"));
	samples = (self->priv->my_width - SPEK_SPECTROGRAM_LPAD) - SPEK_SPECTROGRAM_RPAD;
	if (samples > 0) {
		cairo_surface_t* _tmp0_;
		SpekPipeline* _tmp1_;
		char* _tmp2_;
		self->priv->image = (_tmp0_ = cairo_image_surface_create (CAIRO_FORMAT_RGB24, samples, SPEK_SPECTROGRAM_BANDS), _cairo_surface_destroy0 (self->priv->image), _tmp0_);
		self->priv->pipeline = (_tmp1_ = spek_pipeline_new (self->priv->_file_name, SPEK_SPECTROGRAM_BANDS, samples, SPEK_SPECTROGRAM_THRESHOLD, _spek_spectrogram_data_cb_spek_pipeline_callback, self), _spek_pipeline_unref0 (self->priv->pipeline), _tmp1_);
		spek_pipeline_start (self->priv->pipeline);
		self->priv->info = (_tmp2_ = g_strdup (spek_pipeline_get_description (self->priv->pipeline)), _g_free0 (self->priv->info), _tmp2_);
	} else {
		cairo_surface_t* _tmp3_;
		SpekPipeline* _tmp4_;
		self->priv->image = (_tmp3_ = NULL, _cairo_surface_destroy0 (self->priv->image), _tmp3_);
		self->priv->pipeline = (_tmp4_ = NULL, _spek_pipeline_unref0 (self->priv->pipeline), _tmp4_);
	}
}


static void spek_spectrogram_data_cb (SpekSpectrogram* self, gint sample, float* values, int values_length1) {
	g_return_if_fail (self != NULL);
	{
		gint y;
		y = 0;
		{
			gboolean _tmp0_;
			_tmp0_ = TRUE;
			while (TRUE) {
				double level;
				if (!_tmp0_) {
					y++;
				}
				_tmp0_ = FALSE;
				if (!(y < SPEK_SPECTROGRAM_BANDS)) {
					break;
				}
				level = MIN (1.0, log10 ((1.0 - SPEK_SPECTROGRAM_THRESHOLD) + values[y]) / log10 ((double) (-SPEK_SPECTROGRAM_THRESHOLD)));
				spek_spectrogram_put_pixel (self, self->priv->image, sample, y, spek_spectrogram_get_color (self, level));
			}
		}
	}
	self->priv->seg_count = sample;
}


static char* double_to_string (double self) {
	char* result = NULL;
	gint _tmp0__length1;
	gchar* _tmp0_;
	char* _tmp1_;
	result = (_tmp1_ = g_strdup (g_ascii_dtostr ((_tmp0_ = g_new0 (gchar, G_ASCII_DTOSTR_BUF_SIZE), _tmp0__length1 = G_ASCII_DTOSTR_BUF_SIZE, _tmp0_), G_ASCII_DTOSTR_BUF_SIZE, self)), _tmp0_ = (g_free (_tmp0_), NULL), _tmp1_);
	return result;
}


static double _lambda0_ (gint unit, Block2Data* _data2_) {
	Block1Data* _data1_;
	SpekSpectrogram * self;
	double result = 0.0;
	_data1_ = _data2_->_data1_;
	self = _data1_->self;
	result = (((_data1_->w - SPEK_SPECTROGRAM_LPAD) - SPEK_SPECTROGRAM_RPAD) * unit) / _data2_->duration_seconds;
	return result;
}


static double __lambda0__spek_ruler_unit_to_pixel (gint unit, gpointer self) {
	double result;
	result = _lambda0_ (unit, self);
	return result;
}


static char* _lambda1_ (gint unit, SpekSpectrogram* self) {
	char* result = NULL;
	result = g_strdup_printf ("%d:%02d", unit / 60, unit % 60);
	return result;
}


static char* __lambda1__spek_ruler_format_tick (gint unit, gpointer self) {
	char* result;
	result = _lambda1_ (unit, self);
	return result;
}


static double _lambda2_ (gint unit, Block2Data* _data2_) {
	Block1Data* _data1_;
	SpekSpectrogram * self;
	double result = 0.0;
	_data1_ = _data2_->_data1_;
	self = _data1_->self;
	result = (((_data1_->h - SPEK_SPECTROGRAM_TPAD) - SPEK_SPECTROGRAM_BPAD) * unit) / _data2_->freq;
	return result;
}


static double __lambda2__spek_ruler_unit_to_pixel (gint unit, gpointer self) {
	double result;
	result = _lambda2_ (unit, self);
	return result;
}


static char* _lambda3_ (gint unit, SpekSpectrogram* self) {
	char* result = NULL;
	result = g_strdup_printf ("%d kHz", unit / 1000);
	return result;
}


static char* __lambda3__spek_ruler_format_tick (gint unit, gpointer self) {
	char* result;
	result = _lambda3_ (unit, self);
	return result;
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (Block2Data* _data2_) {
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		block1_data_unref (_data2_->_data1_);
		g_slice_free (Block2Data, _data2_);
	}
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (Block1Data* _data1_) {
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void spek_spectrogram_draw (SpekSpectrogram* self, cairo_t* cr) {
	Block1Data* _data1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (cr != NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = g_object_ref (self);
	_data1_->w = (double) self->priv->my_width;
	_data1_->h = (double) self->priv->my_height;
	cairo_set_source_rgb (cr, (double) 0, (double) 0, (double) 0);
	cairo_paint (cr);
	if (self->priv->image != NULL) {
		Block2Data* _data2_;
		PangoLayout* layout;
		PangoFontDescription* _tmp2_;
		char* _tmp1_;
		char* _tmp0_;
		gint _tmp4__length1;
		gint* _tmp4_;
		gint* _tmp3_ = NULL;
		SpekRuler* _tmp5_;
		SpekRuler* time_ruler;
		gint _tmp7__length1;
		gint* _tmp7_;
		gint* _tmp6_ = NULL;
		SpekRuler* _tmp8_;
		SpekRuler* rate_ruler;
		PangoFontDescription* _tmp11_;
		char* _tmp10_;
		char* _tmp9_;
		gint text_width = 0;
		gint text_height = 0;
		PangoFontDescription* _tmp14_;
		char* _tmp13_;
		char* _tmp12_;
		_data2_ = g_slice_new0 (Block2Data);
		_data2_->_ref_count_ = 1;
		_data2_->_data1_ = block1_data_ref (_data1_);
		cairo_translate (cr, (double) SPEK_SPECTROGRAM_LPAD, _data1_->h - SPEK_SPECTROGRAM_BPAD);
		cairo_scale (cr, (double) 1, (-((_data1_->h - SPEK_SPECTROGRAM_TPAD) - SPEK_SPECTROGRAM_BPAD)) / cairo_image_surface_get_height (self->priv->image));
		cairo_set_source_surface (cr, self->priv->image, (double) 0, (double) 0);
		cairo_paint (cr);
		cairo_identity_matrix (cr);
		cairo_set_source_rgb (cr, (double) 1, (double) 1, (double) 1);
		cairo_set_line_width (cr, (double) 1);
		cairo_set_antialias (cr, CAIRO_ANTIALIAS_NONE);
		layout = pango_cairo_create_layout (cr);
		pango_layout_set_font_description (layout, _tmp2_ = pango_font_description_from_string (_tmp1_ = g_strconcat ("Sans ", _tmp0_ = double_to_string (8 * self->priv->FONT_SCALE), NULL)));
		_pango_font_description_free0 (_tmp2_);
		_g_free0 (_tmp1_);
		_g_free0 (_tmp0_);
		pango_layout_set_width (layout, -1);
		_data2_->duration_seconds = (gint) spek_pipeline_get_duration (self->priv->pipeline);
		time_ruler = (_tmp5_ = spek_ruler_new ("00:00", (_tmp4_ = (_tmp3_ = g_new0 (gint, 12), _tmp3_[0] = 1, _tmp3_[1] = 2, _tmp3_[2] = 5, _tmp3_[3] = 10, _tmp3_[4] = 20, _tmp3_[5] = 30, _tmp3_[6] = 1 * 60, _tmp3_[7] = 2 * 60, _tmp3_[8] = 5 * 60, _tmp3_[9] = 10 * 60, _tmp3_[10] = 20 * 60, _tmp3_[11] = 30 * 60, _tmp3_), _tmp4__length1 = 12, _tmp4_), 12, _data2_->duration_seconds, 1.5, __lambda0__spek_ruler_unit_to_pixel, _data2_, __lambda1__spek_ruler_format_tick, self), _tmp4_ = (g_free (_tmp4_), NULL), _tmp5_);
		cairo_translate (cr, (double) SPEK_SPECTROGRAM_LPAD, _data1_->h - SPEK_SPECTROGRAM_BPAD);
		spek_ruler_draw (time_ruler, cr, layout, TRUE);
		cairo_identity_matrix (cr);
		_data2_->freq = spek_pipeline_get_sample_rate (self->priv->pipeline) / 2;
		rate_ruler = (_tmp8_ = spek_ruler_new ("00 kHz", (_tmp7_ = (_tmp6_ = g_new0 (gint, 5), _tmp6_[0] = 1000, _tmp6_[1] = 2000, _tmp6_[2] = 5000, _tmp6_[3] = 10000, _tmp6_[4] = 20000, _tmp6_), _tmp7__length1 = 5, _tmp7_), 5, _data2_->freq, 3.0, __lambda2__spek_ruler_unit_to_pixel, _data2_, __lambda3__spek_ruler_format_tick, self), _tmp7_ = (g_free (_tmp7_), NULL), _tmp8_);
		cairo_translate (cr, (double) SPEK_SPECTROGRAM_LPAD, (double) SPEK_SPECTROGRAM_TPAD);
		spek_ruler_draw (rate_ruler, cr, layout, FALSE);
		cairo_identity_matrix (cr);
		cairo_move_to (cr, (double) SPEK_SPECTROGRAM_LPAD, (double) (SPEK_SPECTROGRAM_TPAD - SPEK_SPECTROGRAM_GAP));
		pango_layout_set_font_description (layout, _tmp11_ = pango_font_description_from_string (_tmp10_ = g_strconcat ("Sans ", _tmp9_ = double_to_string (9 * self->priv->FONT_SCALE), NULL)));
		_pango_font_description_free0 (_tmp11_);
		_g_free0 (_tmp10_);
		_g_free0 (_tmp9_);
		pango_layout_set_width (layout, ((gint) ((_data1_->w - SPEK_SPECTROGRAM_LPAD) - SPEK_SPECTROGRAM_RPAD)) * PANGO_SCALE);
		pango_layout_set_ellipsize (layout, PANGO_ELLIPSIZE_END);
		pango_layout_set_text (layout, self->priv->info, -1);
		pango_cairo_show_layout_line (cr, pango_layout_get_line (layout, 0));
		pango_layout_get_pixel_size (layout, &text_width, &text_height);
		cairo_move_to (cr, (double) SPEK_SPECTROGRAM_LPAD, (double) ((SPEK_SPECTROGRAM_TPAD - (2 * SPEK_SPECTROGRAM_GAP)) - text_height));
		pango_layout_set_font_description (layout, _tmp14_ = pango_font_description_from_string (_tmp13_ = g_strconcat ("Sans Bold ", _tmp12_ = double_to_string (10 * self->priv->FONT_SCALE), NULL)));
		_pango_font_description_free0 (_tmp14_);
		_g_free0 (_tmp13_);
		_g_free0 (_tmp12_);
		pango_layout_set_width (layout, ((gint) ((_data1_->w - SPEK_SPECTROGRAM_LPAD) - SPEK_SPECTROGRAM_RPAD)) * PANGO_SCALE);
		pango_layout_set_ellipsize (layout, PANGO_ELLIPSIZE_START);
		pango_layout_set_text (layout, self->priv->_file_name, -1);
		pango_cairo_show_layout_line (cr, pango_layout_get_line (layout, 0));
		_g_object_unref0 (rate_ruler);
		_g_object_unref0 (time_ruler);
		_g_object_unref0 (layout);
		block2_data_unref (_data2_);
	}
	cairo_set_source_rgb (cr, (double) 1, (double) 1, (double) 1);
	cairo_set_line_width (cr, (double) 1);
	cairo_set_antialias (cr, CAIRO_ANTIALIAS_NONE);
	cairo_rectangle (cr, (double) SPEK_SPECTROGRAM_LPAD, (double) SPEK_SPECTROGRAM_TPAD, (_data1_->w - SPEK_SPECTROGRAM_LPAD) - SPEK_SPECTROGRAM_RPAD, (_data1_->h - SPEK_SPECTROGRAM_TPAD) - SPEK_SPECTROGRAM_BPAD);
	cairo_stroke (cr);
	cairo_translate (cr, (_data1_->w - SPEK_SPECTROGRAM_RPAD) + SPEK_SPECTROGRAM_GAP, _data1_->h - SPEK_SPECTROGRAM_BPAD);
	cairo_scale (cr, (double) 1, (-((_data1_->h - SPEK_SPECTROGRAM_TPAD) - SPEK_SPECTROGRAM_BPAD)) / cairo_image_surface_get_height (self->priv->palette));
	cairo_set_source_surface (cr, self->priv->palette, (double) 0, (double) 0);
	cairo_paint (cr);
	cairo_identity_matrix (cr);
	block1_data_unref (_data1_);
}


static void spek_spectrogram_put_pixel (SpekSpectrogram* self, cairo_surface_t* surface, gint x, gint y, guint32 color) {
	gint i;
	guchar* _tmp0_;
	gint _data_size_;
	gint data_length1;
	guchar* data;
	guint32* p;
	g_return_if_fail (self != NULL);
	g_return_if_fail (surface != NULL);
	i = (y * cairo_image_surface_get_stride (surface)) + (x * 4);
	data = (_tmp0_ = cairo_image_surface_get_data (surface), data_length1 = -1, _data_size_ = data_length1, _tmp0_);
	p = (guint32*) (&data[i]);
	*p = color;
}


static guint32 spek_spectrogram_get_color (SpekSpectrogram* self, double level) {
	guint32 result = 0U;
	double r;
	double g;
	double b;
	gboolean _tmp0_ = FALSE;
	double cf;
	gboolean _tmp5_ = FALSE;
	guint32 rr;
	guint32 gg;
	guint32 bb;
	g_return_val_if_fail (self != NULL, 0U);
	level = level * 0.6625;
	r = 0.0;
	g = 0.0;
	b = 0.0;
	if (level >= 0) {
		_tmp0_ = level < 0.15;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		r = (0.15 - level) / (0.15 + 0.075);
		g = 0.0;
		b = 1.0;
	} else {
		gboolean _tmp1_ = FALSE;
		if (level >= 0.15) {
			_tmp1_ = level < 0.275;
		} else {
			_tmp1_ = FALSE;
		}
		if (_tmp1_) {
			r = 0.0;
			g = (level - 0.15) / (0.275 - 0.15);
			b = 1.0;
		} else {
			gboolean _tmp2_ = FALSE;
			if (level >= 0.275) {
				_tmp2_ = level < 0.325;
			} else {
				_tmp2_ = FALSE;
			}
			if (_tmp2_) {
				r = 0.0;
				g = 1.0;
				b = (0.325 - level) / (0.325 - 0.275);
			} else {
				gboolean _tmp3_ = FALSE;
				if (level >= 0.325) {
					_tmp3_ = level < 0.5;
				} else {
					_tmp3_ = FALSE;
				}
				if (_tmp3_) {
					r = (level - 0.325) / (0.5 - 0.325);
					g = 1.0;
					b = 0.0;
				} else {
					gboolean _tmp4_ = FALSE;
					if (level >= 0.5) {
						_tmp4_ = level < 0.6625;
					} else {
						_tmp4_ = FALSE;
					}
					if (_tmp4_) {
						r = 1.0;
						g = (0.6625 - level) / (0.6625 - 0.5f);
						b = 0.0;
					}
				}
			}
		}
	}
	cf = 1.0;
	if (level >= 0.0) {
		_tmp5_ = level < 0.1;
	} else {
		_tmp5_ = FALSE;
	}
	if (_tmp5_) {
		cf = level / 0.1;
	}
	cf = cf * 255.0;
	rr = (guint32) ((r * cf) + 0.5);
	gg = (guint32) ((g * cf) + 0.5);
	bb = (guint32) ((b * cf) + 0.5);
	result = ((rr << 16) + (gg << 8)) + bb;
	return result;
}


const char* spek_spectrogram_get_file_name (SpekSpectrogram* self) {
	const char* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_file_name;
	return result;
}


static void spek_spectrogram_set_file_name (SpekSpectrogram* self, const char* value) {
	char* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_file_name = (_tmp0_ = g_strdup (value), _g_free0 (self->priv->_file_name), _tmp0_);
	g_object_notify ((GObject *) self, "file-name");
}


static void spek_spectrogram_class_init (SpekSpectrogramClass * klass) {
	spek_spectrogram_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SpekSpectrogramPrivate));
	G_OBJECT_CLASS (klass)->get_property = spek_spectrogram_get_property;
	G_OBJECT_CLASS (klass)->set_property = spek_spectrogram_set_property;
	G_OBJECT_CLASS (klass)->finalize = spek_spectrogram_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SPEK_SPECTROGRAM_FILE_NAME, g_param_spec_string ("file-name", "file-name", "file-name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void spek_spectrogram_instance_init (SpekSpectrogram * self) {
	self->priv = SPEK_SPECTROGRAM_GET_PRIVATE (self);
	self->priv->my_width = 960;
	self->priv->my_height = 300;
	self->priv->seg_count = -1;
	self->priv->last_count = -1;
	self->priv->got_media_info = FALSE;
	self->priv->FONT_SCALE = 1.0;
}


static void spek_spectrogram_finalize (GObject* obj) {
	SpekSpectrogram * self;
	self = SPEK_SPECTROGRAM (obj);
	_cairo_surface_destroy0 (self->priv->my_image);
	_g_free0 (self->priv->_file_name);
	_spek_pipeline_unref0 (self->priv->pipeline);
	_g_free0 (self->priv->info);
	_cairo_surface_destroy0 (self->priv->image);
	_cairo_surface_destroy0 (self->priv->palette);
	G_OBJECT_CLASS (spek_spectrogram_parent_class)->finalize (obj);
}


GType spek_spectrogram_get_type (void) {
	static volatile gsize spek_spectrogram_type_id__volatile = 0;
	if (g_once_init_enter (&spek_spectrogram_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SpekSpectrogramClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) spek_spectrogram_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SpekSpectrogram), 0, (GInstanceInitFunc) spek_spectrogram_instance_init, NULL };
		GType spek_spectrogram_type_id;
		spek_spectrogram_type_id = g_type_register_static (G_TYPE_OBJECT, "SpekSpectrogram", &g_define_type_info, 0);
		g_once_init_leave (&spek_spectrogram_type_id__volatile, spek_spectrogram_type_id);
	}
	return spek_spectrogram_type_id__volatile;
}


static void spek_spectrogram_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SpekSpectrogram * self;
	self = SPEK_SPECTROGRAM (object);
	switch (property_id) {
		case SPEK_SPECTROGRAM_FILE_NAME:
		g_value_set_string (value, spek_spectrogram_get_file_name (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void spek_spectrogram_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SpekSpectrogram * self;
	self = SPEK_SPECTROGRAM (object);
	switch (property_id) {
		case SPEK_SPECTROGRAM_FILE_NAME:
		spek_spectrogram_set_file_name (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}




