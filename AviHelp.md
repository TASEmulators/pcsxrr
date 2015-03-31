Although PCSX-rr itself is able to dump video, it lacks the functionality to sync audio with video, being only able to record audio in real-time with the right plugin. kkapture is able to record both audio and video, keeping them in sync.

## Step 1: Configure PCSX. ##

First, go to "Configuration"->"Options" and make sure "Pause After Playback" is unchecked and then press "OK". This is important.

Now go to "Configuration"->"Graphics" and configure the GPU plugin as follows. Note the red boxes carefully.

**This configuration is only for dumping AVI! Use whatever configuration is suitable for playing the game or making TASes.**

![http://i19.photobucket.com/albums/b185/jhchan8/pcsx/gpu.png](http://i19.photobucket.com/albums/b185/jhchan8/pcsx/gpu.png)

The window mode should be 320x240 unless you choose otherwise. This is the normal resolution, although the game's resolution could change for some scenes.

Stretching should be set to "Stretch to full window size", as it would appear on a television screen. If you must do post-processing on a 1:1 scale, choose 1:1 instead.

Dithering should be set to "Always dither g-shaded polygons (slowest)". The word "slowest" only applies to rendering speed when playing normally in emulator.

You may have to configure the SPU plugin as well. The important thing is to choose one so that the movie does not desync when playing back.

## Step 2: Using .kkapture. ##

Download [.kkapture](http://www.farbrausch.de/~fg/kkapture/) and run it.

Select your "pcsx.exe" executable for the demo field using "Browse..." . Then configure kkapture as follows. Note the red boxes carefully.

![http://i19.photobucket.com/albums/b185/jhchan8/pcsx/kkapture.png](http://i19.photobucket.com/albums/b185/jhchan8/pcsx/kkapture.png)

  * Without the -readonly argument, the movie plays in read+write mode.
  * Frame rate is 60 or 50 depending on NTSC/PAL.
  * Don't forget to select a codec! Choose whatever you want.

Once the configuration is done, click "kkapture!" and it will start running from the beginning. You can load a savestate if you want to jump to the middle to dump AVI. When you are done with AVI dumping, just close PCSX.

## Notes ##
  * The "Encoder" setting ".AVI (VfW, segmented)" has a 2GB segment limit. You'll need to combine the files afterwards.
  * If for any reason PCSX doesn't correctly shut down at the end while capturing it, the video will most likely be broken. So, try pressing CTRL-BREAK at the end and .kkapture should terminate then and close the AVI file properly.