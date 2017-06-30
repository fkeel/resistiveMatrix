# eTextile matrix sensor

- Purpose: 16x16 e-textile matrix sensors
- Copyright (c) 2014 Maurin Donneaud
- Licence: GNU GENERAL PUBLIC LICENSE
- Web site: http://etextile.org

## Requirements
OpenFrameworks 0.9.4 (it's not currently supported with newer versions):

    ttp://www.openframeworks.cc/versions/v0.9.4/of_v0.9.4_linux64_release.tar.gz

To compile the code, you need to set the following variable in your ~/.bashrc, ~/.zshrc or other equivalent:

    # UPDATE WITH YOUR OWN OPEN FRAMEWORKS PATH:
    export OF_ROOT=/opt/openFrameworks/

### oFx Addons dependences
This Program requires the following oFx addons:
 - ofxIO
 - ofxSerial
 - ofxOsc
 - ofxGui
 - ofxOpenCv

The two 1st addons don't come by default with oFx but you can install them:

    cd $OF_ROOT/addons
    git clone -b stable https://github.com/bakercp/ofxIO # tested with commit ef09791
    git clone https://github.com/bakercp/ofxSerial       # tested with commit 8086059

### Linux requirements
    UDEV Rules for Teensy boards
    $ cd /etc/udev/rules.d/
    $ sudo wget https://www.pjrc.com/teensy/49-teensy.rules
    $ sudo udevadm control --reload-rules
    $ sudo apt-get install ccache

## Compiling

    make

If you have 4 cores, it's recommended to use them all as it's long:

    make -j4

To accelerate the compilation we use ccache, you can get it with:

    apt-get install ccache  # debian-like OS
    brew install ccache     # OSX


### Running (at least Linux & Mac)

    make RunRelease


## USING OSC FOR DEVELOPPMENT
You can test the openframework program without the textile device nor arduino.
To do so, simply send an OSC message on port 1234 (defined as UDP_INPUT_PORT in ofApp.h).
The message should be something like (/point (x,y,z) ) where x,y and z are floats between 0 and 1.
you can send a /reset message to clear the map (remove all points).


## TODO
- Add XML config file
- Update openFrameworks TUIO wrapper : https://github.com/arturoc/ofxTuioWrapper
- add TUIO
