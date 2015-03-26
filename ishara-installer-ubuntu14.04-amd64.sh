#!/bin/bash
#
# =========================================================================
# This is an one-click installer script for Installing Ishara.
# Ishara is a gesture interface for controlling the mouse.
# URL: http://saikatbasak.com/projects/ishara/
#
# Ishara is created by Saikat Basak
# URL: http://saikatbasak.com
#
# This script is authored by Pavak Paul
# URL: http://pavakpaul.in | http://oikyolinux.com
# =========================================================================
#
zenity --info --text "You must run this script from a terminal program!"
#
# Install dependencies...
echo "Installing dependencies ..."
sudo apt-get install libopencv-dev libqt4-dev libv4l-dev libxtst-dev cmake make git
#
# Setting up path for phase#1
echo "Setting up path for phase#1 ..."
cd /tmp
mkdir -p git/
cd git
echo "Current working directory: "
pwd
#
# Cloning git repository
echo "Downloading from git repository ..."
git clone https://github.com/saikatbsk/Ishara.git
#
# Setting up path for phase#2
echo "Setting up path for phase#2 ..."
mkdir -p Ishara/build
cd Ishara/build
echo "Current working directory: "
pwd
#
# Compiling Ishara
echo "Compiling Ishara ..."
cmake ..
make
#
# Installing Ishara
echo "Installing Ishara ..."
sudo make install
zenity --info --text "Ishara is installed on your system."

