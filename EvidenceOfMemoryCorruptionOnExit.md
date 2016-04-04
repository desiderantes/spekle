# Evidence of Memory Corruption #

```
coggie-37-~> foreach i ( `find . -name '*.ogg'` )
foreach? spekle "$i"
foreach? end
./Documents/chpn_op53_coggie.ogg
Spekle: calling open_file(./Documents/chpn_op53_coggie.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=3610, duration=361.59)
Spekle: processing ./Documents/chpn_op53_coggie.ogg ....... DONE!
Spekle: save() my_width=3610 duration=361.59 s. description='Vorbis, 499 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'chpn_op53_coggie.ogg.png'... DONE!
./ItsAllWornOutBlues+21db-anamodynex.ogg
Spekle: calling open_file(./ItsAllWornOutBlues+21db-anamodynex.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1380, duration=138.72)
Spekle: processing ./ItsAllWornOutBlues+21db-anamodynex.ogg ..... DONE!
Spekle: save() my_width=1380 duration=138.72 s. description='Vorbis, 499 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'ItsAllWornOutBlues+21db-anamodynex.ogg.png'... DONE!
./qchord_salsa-Track_2-1/export/DjColtraneRexx-qchord-salsa.ogg
Spekle: calling open_file(./qchord_salsa-Track_2-1/export/DjColtraneRexx-qchord-salsa.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=3010, duration=301.47)
Spekle: processing ./qchord_salsa-Track_2-1/export/DjColtraneRexx-qchord-salsa.ogg ....... DONE!
Spekle: save() my_width=3010 duration=301.47 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'DjColtraneRexx-qchord-salsa.ogg.png'... DONE!
./Music/MIDI/recorded_straight_off_db50xg-Track_1-2.ogg
Spekle: calling open_file(./Music/MIDI/recorded_straight_off_db50xg-Track_1-2.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=8200, duration=820.74)
Spekle: processing ./Music/MIDI/recorded_straight_off_db50xg-Track_1-2.ogg ............ DONE!
Spekle: save() my_width=8200 duration=820.74 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'recorded_straight_off_db50xg-Track_1-2.ogg.png'... DONE!
*** glibc detected *** spekle: free(): invalid pointer: 0x00007f5e8341c010 ***
======= Backtrace: =========
/lib64/libc.so.6[0x3ac0874ac6]
/usr/lib64/libpixman-1.so.0(pixman_image_unref+0x83)[0x3ac9e161b3]
/usr/lib64/libcairo.so.2[0x359c016b85]
/usr/lib64/libcairo.so.2(cairo_surface_finish+0x36)[0x359c02c9d6]
/usr/lib64/libcairo.so.2(cairo_surface_destroy+0x55)[0x359c02ca45]
spekle[0x406b1e]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x407d3d]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x403857]
/lib64/libc.so.6(__libc_start_main+0xfd)[0x3ac081eb1d]
spekle[0x403439]
======= Memory map: ========
00400000-0040b000 r-xp 00000000 fd:00 9674949                            /usr/local/bin/spekle
0060a000-0060b000 rw-p 0000a000 fd:00 9674949                            /usr/local/bin/spekle
015a4000-01702000 rw-p 00000000 00:00 0                                  [heap]
359ac00000-359ac26000 r-xp 00000000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ac26000-359ae25000 ---p 00026000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ae25000-359ae26000 rw-p 00025000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359b000000-359b01e000 r-xp 00000000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b01e000-359b21e000 ---p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b21e000-359b21f000 rw-p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b400000-359b85d000 r-xp 00000000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359b85d000-359ba5c000 ---p 0045d000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba5c000-359ba67000 rw-p 0045c000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba67000-359ba69000 rw-p 00000000 00:00 0 
359bc00000-359bcb6000 r-xp 00000000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359bcb6000-359beb6000 ---p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359beb6000-359bebb000 rw-p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359c000000-359c076000 r-xp 00000000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c076000-359c276000 ---p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c276000-359c279000 rw-p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c400000-359c40b000 r-xp 00000000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c40b000-359c60b000 ---p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c60b000-359c60c000 rw-p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
38c1a00000-38c1a8c000 r-xp 00000000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1a8c000-38c1c8c000 ---p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1c8c000-38c1c8f000 rw-p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1e00000-38c1ec0000 r-xp 00000000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c1ec0000-38c20bf000 ---p 000c0000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c20bf000-38c20cc000 rw-p 000bf000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c2200000-38c273d000 r-xp 00000000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c273d000-38c293d000 ---p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c293d000-38c2957000 rw-p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c2957000-38c2e34000 rw-p 00000000 00:00 0 
396ae00000-396ae60000 r-xp 00000000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396ae60000-396b05f000 ---p 00060000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b05f000-396b061000 rw-p 0005f000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b061000-396b1fe000 rw-p 00000000 00:00 0 
396b200000-396b20e000 r-xp 00000000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b20e000-396b40d000 ---p 0000e000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40d000-396b40e000 rw-p 0000d000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40e000-396b412000 rw-p 00000000 00:00 0 
3ac0400000-3ac041e000 r-xp 00000000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061d000-3ac061e000 r--p 0001d000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061e000-3ac061f000 rw-p 0001e000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061f000-3ac0620000 rw-p 00000000 00:00 0 
3ac0800000-3ac0970000 r-xp 00000000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0970000-3ac0b6f000 ---p 00170000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b6f000-3ac0b73000 r--p 0016f000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b73000-3ac0b74000 rw-p 00173000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b74000-3ac0b79000 rw-p 00000000 00:00 0 
3ac0c00000-3ac0c83000 r-xp 00000000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0c83000-3ac0e82000 ---p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e82000-3ac0e83000 r--p 00082000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e83000-3ac0e84000 rw-p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac1000000-3ac1002000 r-xp 00000000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1002000-3ac1202000 ---p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1202000-3ac1203000 r--p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1203000-3ac1204000 rw-p 00003000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1400000-3ac1417000 r-xp 00000000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1417000-3ac1616000 ---p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1616000-3ac1617000 r--p 00016000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1617000-3ac1618000 rw-p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.soAbort (core dumped)
./Music/MIDI/all_my_midi,_on_db60xg-Track_1-3.ogg
Spekle: calling open_file(./Music/MIDI/all_my_midi,_on_db60xg-Track_1-3.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=200, duration=2.90)
Spekle: processing ./Music/MIDI/all_my_midi,_on_db60xg-Track_1-3.ogg .... DONE!
Spekle: save() my_width=200 duration=2.90 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'all_my_midi,_on_db60xg-Track_1-3.ogg.png'... DONE!
./Music/MIDI/qchord_salsa-Track_2-1.ogg
Spekle: calling open_file(./Music/MIDI/qchord_salsa-Track_2-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=3010, duration=301.47)
Spekle: processing ./Music/MIDI/qchord_salsa-Track_2-1.ogg ....... DONE!
Spekle: save() my_width=3010 duration=301.47 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'qchord_salsa-Track_2-1.ogg.png'... DONE!
./Music/MIDI/all_my_midi,_on_db60xg-Track_1-2.ogg
Spekle: calling open_file(./Music/MIDI/all_my_midi,_on_db60xg-Track_1-2.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1780, duration=178.86)
Spekle: processing ./Music/MIDI/all_my_midi,_on_db60xg-Track_1-2.ogg ..... DONE!
Spekle: save() my_width=1780 duration=178.86 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'all_my_midi,_on_db60xg-Track_1-2.ogg.png'... DONE!
./Music/MIDI/qchord_freakout-Track_1-1.ogg
Spekle: calling open_file(./Music/MIDI/qchord_freakout-Track_1-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=800, duration=8.54)
Spekle: processing ./Music/MIDI/qchord_freakout-Track_1-1.ogg .... DONE!
Spekle: save() my_width=800 duration=8.54 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'qchord_freakout-Track_1-1.ogg.png'... DONE!
./Music/MIDI/all_my_midi,_on_db60xg-Track_2-2.ogg
Spekle: calling open_file(./Music/MIDI/all_my_midi,_on_db60xg-Track_2-2.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=200, duration=2.90)
Spekle: processing ./Music/MIDI/all_my_midi,_on_db60xg-Track_2-2.ogg .... DONE!
Spekle: save() my_width=200 duration=2.90 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'all_my_midi,_on_db60xg-Track_2-2.ogg.png'... DONE!
./Music/MIDI/all_my_midi,_on_db60xg-Track_2-1.ogg
Spekle: calling open_file(./Music/MIDI/all_my_midi,_on_db60xg-Track_2-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1780, duration=178.81)
Spekle: processing ./Music/MIDI/all_my_midi,_on_db60xg-Track_2-1.ogg ..... DONE!
Spekle: save() my_width=1780 duration=178.81 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'all_my_midi,_on_db60xg-Track_2-1.ogg.png'... DONE!
./Music/MIDI/dfgdfg-Track_1-1.ogg
Spekle: calling open_file(./Music/MIDI/dfgdfg-Track_1-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=4200, duration=420.07)
Spekle: processing ./Music/MIDI/dfgdfg-Track_1-1.ogg ........ DONE!
Spekle: save() my_width=4200 duration=420.07 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'dfgdfg-Track_1-1.ogg.png'... DONE!
*** glibc detected *** spekle: free(): invalid pointer: 0x00007f48a880a010 ***
======= Backtrace: =========
/lib64/libc.so.6[0x3ac0874ac6]
/usr/lib64/libpixman-1.so.0(pixman_image_unref+0x83)[0x3ac9e161b3]
/usr/lib64/libcairo.so.2[0x359c016b85]
/usr/lib64/libcairo.so.2(cairo_surface_finish+0x36)[0x359c02c9d6]
/usr/lib64/libcairo.so.2(cairo_surface_destroy+0x55)[0x359c02ca45]
spekle[0x406b1e]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x407d3d]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x403857]
/lib64/libc.so.6(__libc_start_main+0xfd)[0x3ac081eb1d]
spekle[0x403439]
======= Memory map: ========
00400000-0040b000 r-xp 00000000 fd:00 9674949                            /usr/local/bin/spekle
0060a000-0060b000 rw-p 0000a000 fd:00 9674949                            /usr/local/bin/spekle
00bd8000-00d15000 rw-p 00000000 00:00 0                                  [heap]
359ac00000-359ac26000 r-xp 00000000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ac26000-359ae25000 ---p 00026000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ae25000-359ae26000 rw-p 00025000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359b000000-359b01e000 r-xp 00000000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b01e000-359b21e000 ---p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b21e000-359b21f000 rw-p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b400000-359b85d000 r-xp 00000000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359b85d000-359ba5c000 ---p 0045d000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba5c000-359ba67000 rw-p 0045c000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba67000-359ba69000 rw-p 00000000 00:00 0 
359bc00000-359bcb6000 r-xp 00000000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359bcb6000-359beb6000 ---p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359beb6000-359bebb000 rw-p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359c000000-359c076000 r-xp 00000000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c076000-359c276000 ---p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c276000-359c279000 rw-p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c400000-359c40b000 r-xp 00000000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c40b000-359c60b000 ---p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c60b000-359c60c000 rw-p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
38c1a00000-38c1a8c000 r-xp 00000000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1a8c000-38c1c8c000 ---p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1c8c000-38c1c8f000 rw-p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1e00000-38c1ec0000 r-xp 00000000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c1ec0000-38c20bf000 ---p 000c0000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c20bf000-38c20cc000 rw-p 000bf000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c2200000-38c273d000 r-xp 00000000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c273d000-38c293d000 ---p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c293d000-38c2957000 rw-p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c2957000-38c2e34000 rw-p 00000000 00:00 0 
396ae00000-396ae60000 r-xp 00000000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396ae60000-396b05f000 ---p 00060000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b05f000-396b061000 rw-p 0005f000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b061000-396b1fe000 rw-p 00000000 00:00 0 
396b200000-396b20e000 r-xp 00000000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b20e000-396b40d000 ---p 0000e000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40d000-396b40e000 rw-p 0000d000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40e000-396b412000 rw-p 00000000 00:00 0 
3ac0400000-3ac041e000 r-xp 00000000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061d000-3ac061e000 r--p 0001d000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061e000-3ac061f000 rw-p 0001e000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061f000-3ac0620000 rw-p 00000000 00:00 0 
3ac0800000-3ac0970000 r-xp 00000000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0970000-3ac0b6f000 ---p 00170000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b6f000-3ac0b73000 r--p 0016f000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b73000-3ac0b74000 rw-p 00173000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b74000-3ac0b79000 rw-p 00000000 00:00 0 
3ac0c00000-3ac0c83000 r-xp 00000000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0c83000-3ac0e82000 ---p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e82000-3ac0e83000 r--p 00082000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e83000-3ac0e84000 rw-p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac1000000-3ac1002000 r-xp 00000000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1002000-3ac1202000 ---p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1202000-3ac1203000 r--p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1203000-3ac1204000 rw-p 00003000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1400000-3ac1417000 r-xp 00000000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1417000-3ac1616000 ---p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1616000-3ac1617000 r--p 00016000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1617000-3ac1618000 rw-p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.soAbort (core dumped)
./Music/MIDI/recorded_straight_off_db50xg-Track_1-1.ogg
Spekle: calling open_file(./Music/MIDI/recorded_straight_off_db50xg-Track_1-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1250, duration=25.85)
Spekle: processing ./Music/MIDI/recorded_straight_off_db50xg-Track_1-1.ogg .... DONE!
Spekle: save() my_width=1250 duration=25.85 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'recorded_straight_off_db50xg-Track_1-1.ogg.png'... DONE!
./Music/MIDI/fuckit-Track_17-1.ogg
Spekle: calling open_file(./Music/MIDI/fuckit-Track_17-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1150, duration=23.02)
Spekle: processing ./Music/MIDI/fuckit-Track_17-1.ogg .... DONE!
Spekle: save() my_width=1150 duration=23.02 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'fuckit-Track_17-1.ogg.png'... DONE!
./Music/MIDI/qchord_28-Track_17-1.ogg
Spekle: calling open_file(./Music/MIDI/qchord_28-Track_17-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=2870, duration=287.17)
Spekle: processing ./Music/MIDI/qchord_28-Track_17-1.ogg ....... DONE!
Spekle: save() my_width=2870 duration=287.17 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'qchord_28-Track_17-1.ogg.png'... DONE!
./Music/MIDI/foobar-Track_2-1.ogg
Spekle: calling open_file(./Music/MIDI/foobar-Track_2-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=2480, duration=248.58)
Spekle: processing ./Music/MIDI/foobar-Track_2-1.ogg ...... DONE!
Spekle: save() my_width=2480 duration=248.58 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'foobar-Track_2-1.ogg.png'... DONE!
./Music/MIDI/qchord_freakout-Track_1-2.ogg
Spekle: calling open_file(./Music/MIDI/qchord_freakout-Track_1-2.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=200, duration=2.32)
Spekle: processing ./Music/MIDI/qchord_freakout-Track_1-2.ogg .... DONE!
Spekle: save() my_width=200 duration=2.32 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'qchord_freakout-Track_1-2.ogg.png'... DONE!
./Music/MIDI/all_my_midi,_on_db60xg-Track_1-1.ogg
Spekle: calling open_file(./Music/MIDI/all_my_midi,_on_db60xg-Track_1-1.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1426, duration=1426.37)
Spekle: processing ./Music/MIDI/all_my_midi,_on_db60xg-Track_1-1.ogg .............. DONE!
Spekle: save() my_width=1426 duration=1426.37 s. description='Vorbis, 128 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'all_my_midi,_on_db60xg-Track_1-1.ogg.png'... DONE!
./Music/j_s_bach-g_minor_prelude_2.ogg
Spekle: calling open_file(./Music/j_s_bach-g_minor_prelude_2.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1170, duration=117.19)
Spekle: processing ./Music/j_s_bach-g_minor_prelude_2.ogg ..... DONE!
Spekle: save() my_width=1170 duration=117.19 s. description='Vorbis, 112 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'j_s_bach-g_minor_prelude_2.ogg.png'... DONE!
./Music/j_s_bach-g_minor_prelude.ogg
Spekle: calling open_file(./Music/j_s_bach-g_minor_prelude.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=1920, duration=192.50)
Spekle: processing ./Music/j_s_bach-g_minor_prelude.ogg ...... DONE!
Spekle: save() my_width=1920 duration=192.50 s. description='Vorbis, 112 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'j_s_bach-g_minor_prelude.ogg.png'... DONE!
./Music/j_s_bach-eflat_minor_prelude.ogg
Spekle: calling open_file(./Music/j_s_bach-eflat_minor_prelude.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=2320, duration=232.62)
Spekle: processing ./Music/j_s_bach-eflat_minor_prelude.ogg ...... DONE!
Spekle: save() my_width=2320 duration=232.62 s. description='Vorbis, 112 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'j_s_bach-eflat_minor_prelude.ogg.png'... DONE!
./Music/j_s_bach-d_minor_invention.ogg
Spekle: calling open_file(./Music/j_s_bach-d_minor_invention.ogg)
Spekle: start()ing...
Spekle: media_retrieved_cb(num_samples=3150, duration=63.50)
Spekle: processing ./Music/j_s_bach-d_minor_invention.ogg ..... DONE!
Spekle: save() my_width=3150 duration=63.50 s. description='Vorbis, 112 kbps, 48000 Hz, 2 channels'... DONE!
Spekle: saving 'j_s_bach-d_minor_invention.ogg.png'... DONE!
*** glibc detected *** spekle: free(): invalid pointer: 0x00007fa7e05ca010 ***
======= Backtrace: =========
/lib64/libc.so.6[0x3ac0874ac6]
/usr/lib64/libpixman-1.so.0(pixman_image_unref+0x83)[0x3ac9e161b3]
/usr/lib64/libcairo.so.2[0x359c016b85]
/usr/lib64/libcairo.so.2(cairo_surface_finish+0x36)[0x359c02c9d6]
/usr/lib64/libcairo.so.2(cairo_surface_destroy+0x55)[0x359c02ca45]
spekle[0x406b1e]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x407d3d]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x403857]
/lib64/libc.so.6(__libc_start_main+0xfd)[0x3ac081eb1d]
spekle[0x403439]
======= Memory map: ========
00400000-0040b000 r-xp 00000000 fd:00 9674949                            /usr/local/bin/spekle
0060a000-0060b000 rw-p 0000a000 fd:00 9674949                            /usr/local/bin/spekle
0142b000-015a6000 rw-p 00000000 00:00 0                                  [heap]
359ac00000-359ac26000 r-xp 00000000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ac26000-359ae25000 ---p 00026000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ae25000-359ae26000 rw-p 00025000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359b000000-359b01e000 r-xp 00000000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b01e000-359b21e000 ---p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b21e000-359b21f000 rw-p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b400000-359b85d000 r-xp 00000000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359b85d000-359ba5c000 ---p 0045d000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba5c000-359ba67000 rw-p 0045c000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba67000-359ba69000 rw-p 00000000 00:00 0 
359bc00000-359bcb6000 r-xp 00000000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359bcb6000-359beb6000 ---p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359beb6000-359bebb000 rw-p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359c000000-359c076000 r-xp 00000000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c076000-359c276000 ---p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c276000-359c279000 rw-p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c400000-359c40b000 r-xp 00000000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c40b000-359c60b000 ---p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c60b000-359c60c000 rw-p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
38c1a00000-38c1a8c000 r-xp 00000000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1a8c000-38c1c8c000 ---p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1c8c000-38c1c8f000 rw-p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1e00000-38c1ec0000 r-xp 00000000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c1ec0000-38c20bf000 ---p 000c0000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c20bf000-38c20cc000 rw-p 000bf000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c2200000-38c273d000 r-xp 00000000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c273d000-38c293d000 ---p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c293d000-38c2957000 rw-p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c2957000-38c2e34000 rw-p 00000000 00:00 0 
396ae00000-396ae60000 r-xp 00000000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396ae60000-396b05f000 ---p 00060000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b05f000-396b061000 rw-p 0005f000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b061000-396b1fe000 rw-p 00000000 00:00 0 
396b200000-396b20e000 r-xp 00000000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b20e000-396b40d000 ---p 0000e000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40d000-396b40e000 rw-p 0000d000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40e000-396b412000 rw-p 00000000 00:00 0 
3ac0400000-3ac041e000 r-xp 00000000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061d000-3ac061e000 r--p 0001d000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061e000-3ac061f000 rw-p 0001e000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061f000-3ac0620000 rw-p 00000000 00:00 0 
3ac0800000-3ac0970000 r-xp 00000000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0970000-3ac0b6f000 ---p 00170000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b6f000-3ac0b73000 r--p 0016f000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b73000-3ac0b74000 rw-p 00173000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b74000-3ac0b79000 rw-p 00000000 00:00 0 
3ac0c00000-3ac0c83000 r-xp 00000000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0c83000-3ac0e82000 ---p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e82000-3ac0e83000 r--p 00082000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e83000-3ac0e84000 rw-p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac1000000-3ac1002000 r-xp 00000000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1002000-3ac1202000 ---p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1202000-3ac1203000 r--p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1203000-3ac1204000 rw-p 00003000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1400000-3ac1417000 r-xp 00000000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1417000-3ac1616000 ---p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1616000-3ac1617000 r--p 00016000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1617000-3ac1618000 rw-p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.soAbort (core dumped)
coggie-41-~> foreach i ( `find . -name '*.mp3'` )
foreach? spekle "$i"
foreach? end
./Desktop/RA-podcasts/RA151_20090420_BillBrewster-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA151_20090420_BillBrewster-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0xeb4000]max_analyze_duration reached
[mp3 @ 0xeb4000]Estimating duration from bitrate, this may be inaccurate
Spekle: media_retrieved_cb(num_samples=4850, duration=4850.50)
Spekle: processing ./Desktop/RA-podcasts/RA151_20090420_BillBrewster-residentadvisor.net.mp3 ...................................[mp3 @ 0xeb2350]Header missing
.. DONE!
Spekle: save() my_width=4850 duration=4850.50 s. description='MP3 (MPEG audio layer 3), 160 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA151_20090420_BillBrewster-residentadvisor.net.mp3.png'... DONE!
./Desktop/RA-podcasts/RA183_091130_Jan-Krueger-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA183_091130_Jan-Krueger-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x1530000]max_analyze_duration reached
Spekle: media_retrieved_cb(num_samples=5455, duration=5455.41)
Spekle: processing ./Desktop/RA-podcasts/RA183_091130_Jan-Krueger-residentadvisor.net.mp3 ......................................... DONE!
Spekle: save() my_width=5455 duration=5455.41 s. description='MP3 (MPEG audio layer 3), 160 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA183_091130_Jan-Krueger-residentadvisor.net.mp3.png'... DONE!
./Desktop/RA-podcasts/RA157_20090601_Tony-Lionni_residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA157_20090601_Tony-Lionni_residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x201e000]max_analyze_duration reached
[mp3 @ 0x201e000]Estimating duration from bitrate, this may be inaccurate
Spekle: media_retrieved_cb(num_samples=3804, duration=3804.28)
Spekle: processing ./Desktop/RA-podcasts/RA157_20090601_Tony-Lionni_residentadvisor.net.mp3 .............................. DONE!
Spekle: save() my_width=3804 duration=3804.28 s. description='MP3 (MPEG audio layer 3), 128 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA157_20090601_Tony-Lionni_residentadvisor.net.mp3.png'... DONE!
./Desktop/RA-podcasts/RA168_090817_Peter-Van-Hoesen-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA168_090817_Peter-Van-Hoesen-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x24cb000]max_analyze_duration reached
Spekle: media_retrieved_cb(num_samples=5215, duration=5215.35)
Spekle: processing ./Desktop/RA-podcasts/RA168_090817_Peter-Van-Hoesen-residentadvisor.net.mp3 ....................................... DONE!
Spekle: save() my_width=5215 duration=5215.35 s. description='MP3 (MPEG audio layer 3), 128 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA168_090817_Peter-Van-Hoesen-residentadvisor.net.mp3.png'... DONE!
*** glibc detected *** spekle: free(): invalid pointer: 0x00007f06be1d1010 ***
======= Backtrace: =========
/lib64/libc.so.6[0x3ac0874ac6]
/usr/lib64/libpixman-1.so.0(pixman_image_unref+0x83)[0x3ac9e161b3]
/usr/lib64/libcairo.so.2[0x359c016b85]
/usr/lib64/libcairo.so.2(cairo_surface_finish+0x36)[0x359c02c9d6]
/usr/lib64/libcairo.so.2(cairo_surface_destroy+0x55)[0x359c02ca45]
spekle[0x406b1e]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x407d3d]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x403857]
/lib64/libc.so.6(__libc_start_main+0xfd)[0x3ac081eb1d]
spekle[0x403439]
======= Memory map: ========
00400000-0040b000 r-xp 00000000 fd:00 9674949                            /usr/local/bin/spekle
0060a000-0060b000 rw-p 0000a000 fd:00 9674949                            /usr/local/bin/spekle
024a1000-02575000 rw-p 00000000 00:00 0                                  [heap]
359ac00000-359ac26000 r-xp 00000000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ac26000-359ae25000 ---p 00026000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ae25000-359ae26000 rw-p 00025000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359b000000-359b01e000 r-xp 00000000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b01e000-359b21e000 ---p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b21e000-359b21f000 rw-p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b400000-359b85d000 r-xp 00000000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359b85d000-359ba5c000 ---p 0045d000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba5c000-359ba67000 rw-p 0045c000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba67000-359ba69000 rw-p 00000000 00:00 0 
359bc00000-359bcb6000 r-xp 00000000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359bcb6000-359beb6000 ---p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359beb6000-359bebb000 rw-p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359c000000-359c076000 r-xp 00000000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c076000-359c276000 ---p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c276000-359c279000 rw-p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c400000-359c40b000 r-xp 00000000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c40b000-359c60b000 ---p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c60b000-359c60c000 rw-p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
38c1a00000-38c1a8c000 r-xp 00000000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1a8c000-38c1c8c000 ---p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1c8c000-38c1c8f000 rw-p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1e00000-38c1ec0000 r-xp 00000000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c1ec0000-38c20bf000 ---p 000c0000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c20bf000-38c20cc000 rw-p 000bf000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c2200000-38c273d000 r-xp 00000000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c273d000-38c293d000 ---p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c293d000-38c2957000 rw-p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c2957000-38c2e34000 rw-p 00000000 00:00 0 
396ae00000-396ae60000 r-xp 00000000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396ae60000-396b05f000 ---p 00060000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b05f000-396b061000 rw-p 0005f000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b061000-396b1fe000 rw-p 00000000 00:00 0 
396b200000-396b20e000 r-xp 00000000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b20e000-396b40d000 ---p 0000e000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40d000-396b40e000 rw-p 0000d000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40e000-396b412000 rw-p 00000000 00:00 0 
3ac0400000-3ac041e000 r-xp 00000000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061d000-3ac061e000 r--p 0001d000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061e000-3ac061f000 rw-p 0001e000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061f000-3ac0620000 rw-p 00000000 00:00 0 
3ac0800000-3ac0970000 r-xp 00000000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0970000-3ac0b6f000 ---p 00170000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b6f000-3ac0b73000 r--p 0016f000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b73000-3ac0b74000 rw-p 00173000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b74000-3ac0b79000 rw-p 00000000 00:00 0 
3ac0c00000-3ac0c83000 r-xp 00000000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0c83000-3ac0e82000 ---p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e82000-3ac0e83000 r--p 00082000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e83000-3ac0e84000 rw-p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac1000000-3ac1002000 r-xp 00000000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1002000-3ac1202000 ---p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1202000-3ac1203000 r--p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1203000-3ac1204000 rw-p 00003000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1400000-3ac1417000 r-xp 00000000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1417000-3ac1616000 ---p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1616000-3ac1617000 r--p 00016000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1617000-3ac1618000 rw-p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.soAbort (core dumped)
./Desktop/RA-podcasts/RA182_091123_Matt-Edwards-2-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA182_091123_Matt-Edwards-2-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x2022000]max_analyze_duration reached
Spekle: media_retrieved_cb(num_samples=3169, duration=3169.75)
Spekle: processing ./Desktop/RA-podcasts/RA182_091123_Matt-Edwards-2-residentadvisor.net.mp3 ......................... DONE!
Spekle: save() my_width=3169 duration=3169.75 s. description='MP3 (MPEG audio layer 3), 160 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA182_091123_Matt-Edwards-2-residentadvisor.net.mp3.png'... DONE!
*** glibc detected *** spekle: free(): invalid pointer: 0x00007fe9715d1010 ***
======= Backtrace: =========
/lib64/libc.so.6[0x3ac0874ac6]
/usr/lib64/libpixman-1.so.0(pixman_image_unref+0x83)[0x3ac9e161b3]
/usr/lib64/libcairo.so.2[0x359c016b85]
/usr/lib64/libcairo.so.2(cairo_surface_finish+0x36)[0x359c02c9d6]
/usr/lib64/libcairo.so.2(cairo_surface_destroy+0x55)[0x359c02ca45]
spekle[0x406b1e]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x407d3d]
/lib64/libgobject-2.0.so.0(g_object_unref+0x15f)[0x3ac380da1f]
spekle[0x403857]
/lib64/libc.so.6(__libc_start_main+0xfd)[0x3ac081eb1d]
spekle[0x403439]
======= Memory map: ========
00400000-0040b000 r-xp 00000000 fd:00 9674949                            /usr/local/bin/spekle
0060a000-0060b000 rw-p 0000a000 fd:00 9674949                            /usr/local/bin/spekle
01ff8000-020cc000 rw-p 00000000 00:00 0                                  [heap]
359ac00000-359ac26000 r-xp 00000000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ac26000-359ae25000 ---p 00026000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359ae25000-359ae26000 rw-p 00025000 fd:00 8044561                        /usr/lib64/libpng12.so.0.44.0
359b000000-359b01e000 r-xp 00000000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b01e000-359b21e000 ---p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b21e000-359b21f000 rw-p 0001e000 fd:00 6188287                        /usr/lib64/libgdk_pixbuf-2.0.so.0.1800.9
359b400000-359b85d000 r-xp 00000000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359b85d000-359ba5c000 ---p 0045d000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba5c000-359ba67000 rw-p 0045c000 fd:00 6188538                        /usr/lib64/libgtk-x11-2.0.so.0.1800.9
359ba67000-359ba69000 rw-p 00000000 00:00 0 
359bc00000-359bcb6000 r-xp 00000000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359bcb6000-359beb6000 ---p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359beb6000-359bebb000 rw-p 000b6000 fd:00 6188316                        /usr/lib64/libgdk-x11-2.0.so.0.1800.9
359c000000-359c076000 r-xp 00000000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c076000-359c276000 ---p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c276000-359c279000 rw-p 00076000 fd:00 6188158                        /usr/lib64/libcairo.so.2.10800.8
359c400000-359c40b000 r-xp 00000000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c40b000-359c60b000 ---p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
359c60b000-359c60c000 rw-p 0000b000 fd:00 6188230                        /usr/lib64/libpangocairo-1.0.so.0.2600.2
38c1a00000-38c1a8c000 r-xp 00000000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1a8c000-38c1c8c000 ---p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1c8c000-38c1c8f000 rw-p 0008c000 fd:00 7536901                        /usr/lib64/libschroedinger-1.0.so.0.2.0
38c1e00000-38c1ec0000 r-xp 00000000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c1ec0000-38c20bf000 ---p 000c0000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c20bf000-38c20cc000 rw-p 000bf000 fd:00 6191720                        /usr/lib64/libavformat.so.52.64.2
38c2200000-38c273d000 r-xp 00000000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c273d000-38c293d000 ---p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c293d000-38c2957000 rw-p 0053d000 fd:00 7536859                        /usr/lib64/libavcodec.so.52.72.2
38c2957000-38c2e34000 rw-p 00000000 00:00 0 
396ae00000-396ae60000 r-xp 00000000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396ae60000-396b05f000 ---p 00060000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b05f000-396b061000 rw-p 0005f000 fd:00 6191937                        /usr/lib64/libvpx.so.0.9.1
396b061000-396b1fe000 rw-p 00000000 00:00 0 
396b200000-396b20e000 r-xp 00000000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b20e000-396b40d000 ---p 0000e000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40d000-396b40e000 rw-p 0000d000 fd:00 6192034                        /usr/lib64/libavutil.so.50.15.1
396b40e000-396b412000 rw-p 00000000 00:00 0 
3ac0400000-3ac041e000 r-xp 00000000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061d000-3ac061e000 r--p 0001d000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061e000-3ac061f000 rw-p 0001e000 fd:00 8970287                        /lib64/ld-2.11.2.so
3ac061f000-3ac0620000 rw-p 00000000 00:00 0 
3ac0800000-3ac0970000 r-xp 00000000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0970000-3ac0b6f000 ---p 00170000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b6f000-3ac0b73000 r--p 0016f000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b73000-3ac0b74000 rw-p 00173000 fd:00 8970294                        /lib64/libc-2.11.2.so
3ac0b74000-3ac0b79000 rw-p 00000000 00:00 0 
3ac0c00000-3ac0c83000 r-xp 00000000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0c83000-3ac0e82000 ---p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e82000-3ac0e83000 r--p 00082000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac0e83000-3ac0e84000 rw-p 00083000 fd:00 8970303                        /lib64/libm-2.11.2.so
3ac1000000-3ac1002000 r-xp 00000000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1002000-3ac1202000 ---p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1202000-3ac1203000 r--p 00002000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1203000-3ac1204000 rw-p 00003000 fd:00 8970457                        /lib64/libdl-2.11.2.so
3ac1400000-3ac1417000 r-xp 00000000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1417000-3ac1616000 ---p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1616000-3ac1617000 r--p 00016000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1617000-3ac1618000 rw-p 00017000 fd:00 8970455                        /lib64/libpthread-2.11.2.so
3ac1618000-3ac161c000 rw-p 00000000 00:00 0 
3ac1800000-3ac1815000 r-xp 00000000 fd:00 8970358                        /lib64/libz.so.1.2.3Abort (core dumped)
./Desktop/RA-podcasts/RA147_20090323_DJPete-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA147_20090323_DJPete-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0xe9e000]max_analyze_duration reached
[mp3 @ 0xe9e000]Estimating duration from bitrate, this may be inaccurate
Spekle: media_retrieved_cb(num_samples=3311, duration=3311.76)
Spekle: processing ./Desktop/RA-podcasts/RA147_20090323_DJPete-residentadvisor.net.mp3 .......................... DONE!
Spekle: save() my_width=3311 duration=3311.76 s. description='MP3 (MPEG audio layer 3), 160 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA147_20090323_DJPete-residentadvisor.net.mp3.png'... DONE!
./Desktop/RA-podcasts/RA166_20090803_The-Revenge_residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA166_20090803_The-Revenge_residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x1da4000]max_analyze_duration reached
Spekle: media_retrieved_cb(num_samples=4332, duration=4332.85)
Spekle: processing ./Desktop/RA-podcasts/RA166_20090803_The-Revenge_residentadvisor.net.mp3 .................................. DONE!
Spekle: save() my_width=4332 duration=4332.85 s. description='MP3 (MPEG audio layer 3), 128 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA166_20090803_The-Revenge_residentadvisor.net.mp3.png'... DONE!
./Desktop/RA-podcasts/RA172_090914_Still-Going-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA172_090914_Still-Going-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x1d09000]max_analyze_duration reached
Spekle: media_retrieved_cb(num_samples=4246, duration=4246.67)
Spekle: processing ./Desktop/RA-podcasts/RA172_090914_Still-Going-residentadvisor.net.mp3 .................................. DONE!
Spekle: save() my_width=4246 duration=4246.67 s. description='MP3 (MPEG audio layer 3), 160 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA172_090914_Still-Going-residentadvisor.net.mp3.png'... DONE!
./Desktop/RA-podcasts/RA163_090713_PiscoSour-residentadvisor.net.mp3
Spekle: calling open_file(./Desktop/RA-podcasts/RA163_090713_PiscoSour-residentadvisor.net.mp3)
Spekle: start()ing...
[mp3 @ 0x10e7000]max_analyze_duration reached
Spekle: media_retrieved_cb(num_samples=3756, duration=3756.17)
Spekle: processing ./Desktop/RA-podcasts/RA163_090713_PiscoSour-residentadvisor.net.mp3 .............................. DONE!
Spekle: save() my_width=3756 duration=3756.17 s. description='MP3 (MPEG audio layer 3), 128 kbps, 44100 Hz, 2 channels'... DONE!
Spekle: saving 'RA163_090713_PiscoSour-residentadvisor.net.mp3.png'... DONE!
```

### Output Images ###
![http://spekle.googlecode.com/svn/wiki/Acquaviva_November_2008.mp3.png](http://spekle.googlecode.com/svn/wiki/Acquaviva_November_2008.mp3.png)
![http://spekle.googlecode.com/svn/wiki/Acquaviva_October_2008.mp3.png](http://spekle.googlecode.com/svn/wiki/Acquaviva_October_2008.mp3.png)
![http://spekle.googlecode.com/svn/wiki/Acquaviva_September_2008.mp3.png](http://spekle.googlecode.com/svn/wiki/Acquaviva_September_2008.mp3.png)
![http://spekle.googlecode.com/svn/wiki/Acquaviva_definitive_mix_march09.mp3.png](http://spekle.googlecode.com/svn/wiki/Acquaviva_definitive_mix_march09.mp3.png)
![http://spekle.googlecode.com/svn/wiki/Acquaviva_live_april2009.mp3.png](http://spekle.googlecode.com/svn/wiki/Acquaviva_live_april2009.mp3.png)
![http://spekle.googlecode.com/svn/wiki/Art_Bears-The_Song_of_Investment_Capital_Overseas.mp3.png](http://spekle.googlecode.com/svn/wiki/Art_Bears-The_Song_of_Investment_Capital_Overseas.mp3.png)
![http://spekle.googlecode.com/svn/wiki/DJColtraneRexx_TheRevealingScienceOfParticles_scratchpadmix1.mp3.png](http://spekle.googlecode.com/svn/wiki/DJColtraneRexx_TheRevealingScienceOfParticles_scratchpadmix1.mp3.png)
![http://spekle.googlecode.com/svn/wiki/DailyNews_19000.mp3.png](http://spekle.googlecode.com/svn/wiki/DailyNews_19000.mp3.png)
![http://spekle.googlecode.com/svn/wiki/DjColtraneRexx-qchord-salsa.ogg.png](http://spekle.googlecode.com/svn/wiki/DjColtraneRexx-qchord-salsa.ogg.png)
![http://spekle.googlecode.com/svn/wiki/ItsAllWornOutBlues+21db-anamodynex.ogg.png](http://spekle.googlecode.com/svn/wiki/ItsAllWornOutBlues+21db-anamodynex.ogg.png)
![http://spekle.googlecode.com/svn/wiki/Paul%20Woolford%20Essential%20Mix%202004-04-18.mp3.png](http://spekle.googlecode.com/svn/wiki/Paul%20Woolford%20Essential%20Mix%202004-04-18.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA147_20090323_DJPete-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA147_20090323_DJPete-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA148_20090330_Link-wood-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA148_20090330_Link-wood-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA149_20090406_Lo-soul-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA149_20090406_Lo-soul-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA150_20090413_BookaShade-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA150_20090413_BookaShade-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA151_20090420_BillBrewster-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA151_20090420_BillBrewster-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA152_20090427_EllenAllien-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA152_20090427_EllenAllien-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA153_20090504_Intrusion-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA153_20090504_Intrusion-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA154_20090511_Moonstarr_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA154_20090511_Moonstarr_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA155_20090518_Louderbach-minus_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA155_20090518_Louderbach-minus_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA156_20090525_SethTroxler_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA156_20090525_SethTroxler_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA157_20090601_Tony-Lionni_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA157_20090601_Tony-Lionni_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA158_20090608_LeonVincent_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA158_20090608_LeonVincent_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA159_20090615_ManuelTur_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA159_20090615_ManuelTur_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA160_20090623_GilesSmith_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA160_20090623_GilesSmith_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA161_090629_Lawrence-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA161_090629_Lawrence-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA162_090706_nsi-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA162_090706_nsi-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA163_090713_PiscoSour-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA163_090713_PiscoSour-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA164_090720_Maayan-Nidam-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA164_090720_Maayan-Nidam-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA165_090727_Drums-of-Death-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA165_090727_Drums-of-Death-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA166_20090803_The-Revenge_residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA166_20090803_The-Revenge_residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA167_090810_Matias-Aguayo-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA167_090810_Matias-Aguayo-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA168_090817_Peter-Van-Hoesen-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA168_090817_Peter-Van-Hoesen-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA169_090824_Frankie-Knuckles-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA169_090824_Frankie-Knuckles-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA170_090831_FaltyDL-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA170_090831_FaltyDL-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA171_090907_ErolAlkan-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA171_090907_ErolAlkan-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA172_090914_Still-Going-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA172_090914_Still-Going-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA173_090921_Modeselektor-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA173_090921_Modeselektor-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA174_090928_Neil-Landstrumm-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA174_090928_Neil-Landstrumm-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA175_091005_Rick-Wilhite-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA175_091005_Rick-Wilhite-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA176_091012_Arto-Mwambe-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA176_091012_Arto-Mwambe-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA177_091019_Sandwell-District-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA177_091019_Sandwell-District-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA178_091026_FeverRay-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA178_091026_FeverRay-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA179_091102_JoeGoddard-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA179_091102_JoeGoddard-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA180_091109_Dor-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA180_091109_Dor-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA181_091116_Simon-Caldwell-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA181_091116_Simon-Caldwell-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA182_091123_Matt-Edwards-1-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA182_091123_Matt-Edwards-1-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA182_091123_Matt-Edwards-2-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA182_091123_Matt-Edwards-2-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/RA183_091130_Jan-Krueger-residentadvisor.net.mp3.png](http://spekle.googlecode.com/svn/wiki/RA183_091130_Jan-Krueger-residentadvisor.net.mp3.png)
![http://spekle.googlecode.com/svn/wiki/acquaviva_august08.mp3.png](http://spekle.googlecode.com/svn/wiki/acquaviva_august08.mp3.png)
![http://spekle.googlecode.com/svn/wiki/acquaviva_bogota_Dec08.mp3.png](http://spekle.googlecode.com/svn/wiki/acquaviva_bogota_Dec08.mp3.png)
![http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_1-1.ogg.png](http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_1-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_1-2.ogg.png](http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_1-2.ogg.png)
![http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_1-3.ogg.png](http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_1-3.ogg.png)
![http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_2-1.ogg.png](http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_2-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_2-2.ogg.png](http://spekle.googlecode.com/svn/wiki/all_my_midi,_on_db60xg-Track_2-2.ogg.png)
![http://spekle.googlecode.com/svn/wiki/chpn_op53_coggie.ogg.png](http://spekle.googlecode.com/svn/wiki/chpn_op53_coggie.ogg.png)
![http://spekle.googlecode.com/svn/wiki/dfgdfg-Track_1-1.ogg.png](http://spekle.googlecode.com/svn/wiki/dfgdfg-Track_1-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/foobar-Track_2-1.ogg.png](http://spekle.googlecode.com/svn/wiki/foobar-Track_2-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/fs1r.mp3.png](http://spekle.googlecode.com/svn/wiki/fs1r.mp3.png)
![http://spekle.googlecode.com/svn/wiki/fuckit-Track_17-1.ogg.png](http://spekle.googlecode.com/svn/wiki/fuckit-Track_17-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/j_s_bach-d_minor_invention.ogg.png](http://spekle.googlecode.com/svn/wiki/j_s_bach-d_minor_invention.ogg.png)
![http://spekle.googlecode.com/svn/wiki/j_s_bach-eflat_minor_prelude.ogg.png](http://spekle.googlecode.com/svn/wiki/j_s_bach-eflat_minor_prelude.ogg.png)
![http://spekle.googlecode.com/svn/wiki/j_s_bach-g_minor_prelude.ogg.png](http://spekle.googlecode.com/svn/wiki/j_s_bach-g_minor_prelude.ogg.png)
![http://spekle.googlecode.com/svn/wiki/j_s_bach-g_minor_prelude_2.ogg.png](http://spekle.googlecode.com/svn/wiki/j_s_bach-g_minor_prelude_2.ogg.png)
![http://spekle.googlecode.com/svn/wiki/npmrockmashup.mp3.png](http://spekle.googlecode.com/svn/wiki/npmrockmashup.mp3.png)
![http://spekle.googlecode.com/svn/wiki/qchord_28-Track_17-1.ogg.png](http://spekle.googlecode.com/svn/wiki/qchord_28-Track_17-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/qchord_freakout-Track_1-1.ogg.png](http://spekle.googlecode.com/svn/wiki/qchord_freakout-Track_1-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/qchord_freakout-Track_1-2.ogg.png](http://spekle.googlecode.com/svn/wiki/qchord_freakout-Track_1-2.ogg.png)
![http://spekle.googlecode.com/svn/wiki/qchord_salsa-Track_2-1.ogg.png](http://spekle.googlecode.com/svn/wiki/qchord_salsa-Track_2-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/recorded_straight_off_db50xg-Track_1-1.ogg.png](http://spekle.googlecode.com/svn/wiki/recorded_straight_off_db50xg-Track_1-1.ogg.png)
![http://spekle.googlecode.com/svn/wiki/recorded_straight_off_db50xg-Track_1-2.ogg.png](http://spekle.googlecode.com/svn/wiki/recorded_straight_off_db50xg-Track_1-2.ogg.png)