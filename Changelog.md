**v0.1.3** <sub>(2010-04-04)</sub>
  * Lots of stuff from SVN and various fixes.

**v0.1.2** <sub>(2009-08-09)</sub>
  * Eliminated the major cause of desyncs that could occur when rerecording.
  * Added a few hotkeys for Ram Search.
  * Fixed the dialog title for WIN32\_LuaRunScript().

**v0.1.1a** <sub>(2009-08-05)</sub>
  * Fixed the Lua scripting function "joypad.set".

**v0.1.1** <sub>(2009-08-05)</sub>
  * Lua scripting.
  * Fixed a possible cause of desync in GPU\_writeDataMem; only seen when frameskip was enabled (for ex. with Fast Forward). As a side effect of this, Fast Forward is now ~25% slower.
  * Screenshots are now taken correctly and they get saved as PNG.
  * Added "-lua" command line option.
  * Added "Maximum Speed", "Run Lua Script", "Stop Lua Script" and "Reload Lua Script" hotkeys. They will need to be remapped if you've used previous versions of PCSX-RR.
  * Various minor improvements in the "-RR" code.
  * My computer gets 10% slower due to the "pcsx.exe.manifest" file, so it doesn't come within the release archive anymore. You may want to remove it from your PCSX-RR folder too if you have a slow system.

**v0.1.0** <sub>(2009-07-17)</sub>
  * PCSX ignores the CDR plugin disc-switching functionality, so that is only controlled by the core now.
  * CDR plugin is automatically closed and then opened after switching discs to force a reload of the CD ID.
  * Fixed heap corruption when movie files were outputed. (ume.drink)
  * Certain PAD plugins didn't work before; now all of them should work fine for input recording. (ume.drink)
  * Random crashes during FMVs were fixed.

**v0.0.9** <sub>(2009-04-15)</sub>
  * Added RAM Poke.
  * Spaces can now be used in command line arguments.
  * Added "-memwatch" and "-readonly" command line options.
  * Plugin filenames changed to gpuTAS.dll, spuTAS.dll, etc.
  * TAS CD-ROM Plugin now uses SaPu's CDR plugin.
  * RAM watch can now watch signed values.
  * Fixed mistake made since v0.0.7, where the emulator version in the movie file was always "6".
  * The movie replay dialog now shows the emulator version that was used in the making of the movie file.
  * Cheats don't return the previous value anymore after being deactivated.
  * Fixed bug where temporary memory cards made for a movie were kept even after the movie was stopped.
  * Added hotkey for RAM Poke and removed default hotkeys for "Configure X Plugin", since they cause a lot of crashes.
  * Removed option to set custom plugins and bios folders. Now PCSX-RR will only use the default "./bios" and "./plugins" folders.

**v0.0.8** <sub>(2009-03-27)</sub>
  * Probably fixed a crash in some systems regarding movie playback.
  * PCSX-RR and TAS plugins use their own registry entries.
  * Other minor stuff I can't remember.

**v0.0.7** <sub>(2009-01-20)</sub>
  * Fixed major bug where Read-Only mode wasn't Read-Only at all. Thanks to Atma for reporting it.
  * Movie file can record two new actions: "Resident Evil 2/3 fix Enable/Disable" and "Parasite Eve 2 fix Enable/Disable". Also, hotkeys for these actions were added.
  * TAS Video Plugin is now compatible with .kkapture.
  * "Record Avi..." menu option replaced by "Record AVI Help...", which takes you to a help wiki page on Google Code.
  * Added "Linuzappz Iso Cdr Driver 1.4" into the archive.
  * Fixed bug where the frame counter no longer went red to indicate a lag frame. Thanks to Atma for reporting it.
  * !!!IMPORTANT!!!: savesates made with v0.0.6 are no longer compatible with v0.0.7. You have to make these again while replaying the movie file.

**v0.0.6** <sub>(2009-01-17)</sub>
  * New movie file format capable of recording more actions. Also, now it can have embedded memory cards, cheats, etc.
  * New hotkeys: "Play Movie From Beginning", "VSync Advance", "Start/Stop AVI Capture", "Cheats Enable/Disable", etc.
  * New options: "Pause After Playback" (core) and "Movie Sync Mode" (SPU).
  * Command line parameters support.
  * Minor misc optimizations and fixes.

**v0.0.5** <sub>(2008-10-03)</sub>
  * Configurable hotkeys.
  * Cheat editor.
  * RAM search.
  * RAM watch.
  * GPU updates GUI even if no real frame is being drawn.
  * Pause, Frame-Advance and Save State work on FMVs now.
  * Input rerecording stuff written from scratch. It uses an internal buffer, so hard drives will be a lot happier now. Also, it may hopefully fix some desyncs.
  * New movie file format.
  * Fixed a nasty bug where input from Controller 1 wasn't written to the file for one frame. Some movies made with v0.0.1-3 won't work anymore, unless they're hex-edited. Movies made with v0.0.00006 and older will still always sync, even if they didn't on v0.0.1-3.
  * No more GPU crashes at all.
  * Hotkeys work with CPU in interpreter mode too.
  * PCSX doesn't hide the mouse cursor while running.
  * New program icon + manifest file.
  * Some new hotkeys like: Increase/Decrease Speed, Save/Load Current State, Select Save Slot, Start Recording/Playback, etc.
  * There are thousands of new lines of code in this version, and most of them were taken from other open-source emulators, so, a huge thanks to the authors of Dega, FBA, FCEU/FCEUX, Gens, Snes9x and VBA.

**v0.0.3** <sub>(2008-09-15)</sub>
  * Possible workaround for desync issues. PCSX now works as FBA: each time you press "frame advance" it will advance until the next frame is drawn, which means you will see the frame counter jump two numbers or so after a single "frame advance" in most games (those games which run at ~30FPS, for example). Also, "Pause" and "Save State" functions will wait until the next frame is drawn too. It may be annoying if you try to save a state or pause in a 600 frames long static "loading..." screen, but this prevents a LOT of desyncs, and you will quickly get used to it anyway. Of course this isn't 100% desync-proof, but it has helped very much with some of the games I've tested: PaRappa the Rapper, Metal Gear Solid, Ghost in the Shell and Skullmonkeys. Other games may or may not notice changes regarding desyncs.
  * Fixed another bug reported by Atma, where the frame counter didn't stay red after a lagged frame. But this won't be so useful anymore, anyway, since some games "frame advance" two frames or more from now on, and you may miss the lagged frame.
  * Fixed bug where movie-mode did change from "recording" to "replaying" or from "replaying" to "recording" after trying to load a nonexistent savestate.

**v0.0.2** <sub>(2008-09-10)</sub>
  * PCSX won't crash anymore at start if you try to use any other GPU plugin besides P.E.Op.S.
  * Fixed bug reported by Atma, where if you tried to resume emulation at the middle of a movie, it desynced.
  * PCSX won't try to read anymore an extra frame after the movie ends. Also, if your movie file header says "10" frames, it will only play 10 frames, even if there are more frames inside the file. This prevents movie length cheating.

**v0.0.1** <sub>(2008-09-09)</sub>
  * New movie file format.
  * New dialogs for recording and replaying.
  * Option to record mouse, standard or analog controllers.
  * Now movies record/replay both player 1 and player 2.
  * GPU keep messages/counters updated even if emulation is paused.
  * GPU shows emulation status (paused) and movie status (recording/replaying).
  * GPU display both players input.
  * "P.E.Op.S." SPU plugin should sync with all movies made with "No Sound 0.4".
  * "Start recording from savestate" option.
  * Frame counter shows total movie frames.
  * Pause automatically at last frame of playback to prevent movie end.
  * Savestates made while recording/replaying a movie are now named like this: "movieFilename.pxm.000", "movieFilename.pxm.001", etc.
  * Most of the rerecording stuff was rewritten from scratch, so it may have new bugs. Please report them if you found any.