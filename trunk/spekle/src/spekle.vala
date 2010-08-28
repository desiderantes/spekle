/* spekle.vala
 * NPM: was originally spek.vala
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

namespace Spek {
	bool version = false;
	[CCode (array_length = false, array_null_terminated = true)]
	string[] files = null;

	const OptionEntry[] options = {
		{ "version", 'V', 0, OptionArg.NONE, ref version, N_("Display the version and exit"), null },
		{ "", 0, 0, OptionArg.FILENAME_ARRAY, ref files, null, null },
		{ null }
	};

	int main (string[] args) {
		Platform.fix_args (args);

		Intl.bindtextdomain (Config.GETTEXT_PACKAGE, Config.LOCALEDIR);
		Intl.bind_textdomain_codeset (Config.GETTEXT_PACKAGE, "UTF-8");
		Intl.textdomain (Config.GETTEXT_PACKAGE);

		try {
//			Gtk.init_with_args (ref args, _("[FILE]"), (OptionEntry[]) options, Config.GETTEXT_PACKAGE);
            var opt_context = new OptionContext("- Render audio spectrogram to file");
            opt_context.set_help_enabled(true);
            opt_context.add_main_entries(options, "spek");
            opt_context.parse(ref args);
        } catch (OptionError e) {
			print (e.message);
			print ("\n");
			print (_("Run `%s --help` to see a full list of available command line options.\n"), args[0]);
			return 1;
		}

		if (version) {
			print (_("%s version %s\n"), Config.PACKAGE_NAME, Config.PACKAGE_VERSION);
			return 0;
		}

		if (files != null && files.length != 1) {
			print (_("Specify a single file\n"));
			return 1;
		}

		Audio.init ();
		var file_name = files == null ? null : files[0];
		if (file_name != null && file_name.has_prefix ("file://")) {
			try {
				file_name = Filename.from_uri (file_name);
			} catch (ConvertError e) {
				print (e.message);
				print ("\n");
				print (_("Convert error\n"));
			}
		}
		print (file_name);
		print ("\n");
		var app = new SpekApp (file_name);
		print (_("Spekle: processing %s .."), file_name);
		app.wait_till_all_segments_processed_and_save();   

//		Gtk.main ();
//		window.destroy ();

		return 0;
	}
}
