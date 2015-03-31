# PCSX Tutorial #

## Setting up plugins/BIOS ##

When first running PCSX, the program will ask you to set up plugins and BIOS. **Read this information before using a setup. In particular, do not use the default BIOS (Internal HLE).**

### Graphics plugins ###

If you are TASing, the only plugin you should use is the TAS GPU Plugin that comes with PCSX-rr. Otherwise, you can use whatever you want.

### Sound plugins ###

Sound plugins are the most likely factor that affects the timing of movies.

There are a number of SPU plugins:

  * No Sound plugin, which mutes the sound. Used if sound is a problem. Is stable and has the same timing as TAS SPU plugin with the movie sync flag checked.
  * TAS SPU plugin with movie sync on. This is stable, but some games have their sounds cut off or reduced in quality.
  * TAS SPU plugin with movie sync off. This is not as stable, but may have better sound quality.
  * [Eternal SPU](http://www.emuxhaven.net/emuxhaven/psx/plugin/spuEternal141_win.zip). This is not as stable, but has very good sound quality.

![http://i44.tinypic.com/qn4hmu.png](http://i44.tinypic.com/qn4hmu.png)

Both sound quality and stability are a big deal in TASing, and have to be handled per game so do some tests if you are not sure, and report to the [TASVideos forum](http://tasvideos.org/forum/). Note that it is possible to encode Eternal SPU sound quality even if the plugin does not sync with the movie, but it requires a lot of work to do, and depends on the game.

### Input plugins ###

Segu plugins come with PCSX-rr but you can also choose [NRage plugin](http://www.emulator-zone.com/doc.php/psx/psxplugins-tools.html), which has the advantage of saving controller profiles, although there is a config interface bug ("L2" is L1, "[R2](https://code.google.com/p/pcsxrr/source/detail?r=2)" is L2, "L1" is [R2](https://code.google.com/p/pcsxrr/source/detail?r=2)).

### CD-ROM plugins ###

The easiest one to use is TAS ISO plugin, which allows you to set a default ROM image to use.

![http://i42.tinypic.com/ehd7ok.png](http://i42.tinypic.com/ehd7ok.png)

### BIOS ###

Do not use Internal HLE Bios.

Instead, use either

  * SCPHxx01.BIN for NTSC-U games,
  * SCPHxx00.BIN or SCPHxx03.BIN for NTSC-J games, or
  * SCPHxx02.BIN for PAL games.

where the xx can be any number. SCPH1001.BIN is recommended for NTSC-U games on TASVideos.org. See [Wikipedia](http://en.wikipedia.org/wiki/PlayStation_%28console%29) for more information.

You must find the BIOS files yourself.

## Using the emulator ##

  * File -> Run CD if you just want to play.
  * File -> Movie -> Start Playback to play or continue making a movie.
  * File -> Movie -> Start Recording to create a movie.

Don't forget to set hotkeys using Tools -> Map Hotkeys.

You can use savestates and frame advance. To access the menu, press Esc. To attempt resuming, use Emulator -> Run. This may not always work, in which case you'll have to load the most recent savestate.