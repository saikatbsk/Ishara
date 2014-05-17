|| ISHARA || Gesture: A New Communicator
===============================================
ISHARA consists of a built-in or USB webcam and a software which is developed
through this project. The camera is placed on top of the display screen facing
the user and the user uses two different color-markers on the fingers to
control the mouse pointer. Yes the user can do all shorts of actions that is
actually done using a mouse including left-click, right-click, scroll,
drag-n-drop and such.

It is developed using OpenCV and Qt and written in C++. The initial prototype
runs on Linux. There is no Mac or Windows version yet.

See LICENSE.txt to find all the legal stuff.

Requirements
------------
OpenCV (opencv.org)
Qt Development Libraries
V4l2 Development Libraries
XTEST Extension Libraries
CMake
Make

Compilation
------------
Once you have setup the dependencies, download the source,

    $ cd ~/Downloads
    $ git clone https://github.com/saikatbsk/Ishara.git

Create and move into the build directory,

    $ mkdir -p Ishara/build
    $ cd Ishara/build

Run cmake followed by make to build Ishara,

    $ cmake ..
    $ make

To install,

    $ sudo make install


Live long and may the force be with you ;)