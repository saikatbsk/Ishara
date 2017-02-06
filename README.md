Ishara - Mouse Control with Gesture
===============================================
![alt text](src/res/ishara_banner.png "Ishara")
--------------------------
An interface for controlling mouse pointer using finger gestures. Requires a webcam. A user can use two different color markers on his/her fingers to control mouse movements. Includes gestures for emulating click (left and right) and scroll.

Requirements :white_check_mark:
-------------------------------
:pushpin: OpenCV

:pushpin: Qt5 Development Libraries

:pushpin: V4l2 Development Libraries

:pushpin: XTEST Extension Libraries

:pushpin: CMake

:pushpin: Make

Compilation :arrow_forward:
---------------------------
Once you have setup the dependencies, download the source:
```
$ cd ~/Downloads
$ git clone https://github.com/saikatbsk/Ishara.git
```

Create and move into the build directory:
```
$ mkdir -p Ishara/build
$ cd Ishara/build
```

Run *cmake* followed by *make* to build Ishara:
```
$ cmake ..
$ make
```

To install:
```
$ sudo make install
```

Links :link:
------------
* [Ishara on Youtube](https://www.youtube.com/watch?v=B1_xtdR8pn4)
* [OpenCV](http://opencv.org/)

> Live long and may the source be with you. :octocat:
