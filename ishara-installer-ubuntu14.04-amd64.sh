#!/bin/bash
#This is a 1 click installer bash script for Installing Ishara.
#Ishara is a computer vision gesture interpretation application | http://saikatbasak.com/projects/ishara/ |
#Ishara is created by Saikat Basak | http://saikatbasak.com |  
#This script is written by Pavak Paul | http://pavakpaul.in | http://oikyolinux.com |
#You must run this script in a terminal program (CLI mode)
zenity --info --text "You must run this script from a terminal program. Otherwise it won't work. Click OK to close this box."
#------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------------------------------------------------------
#Lets install the dependencies
echo "Installing dependencies..."
sleep .5s
sudo apt-get install libopencv-dev libqt4-dev libv4l-dev libxtst-dev cmake make git
#Setting up path @ phase 1
echo "Setting up path @ phase 1"
sleep .5s
cd ~/
mkdir -p git/
cd git
echo "curent working directory:"
pwd
#Downloading from git repository
echo "Downloading from git repository"
git clone https://github.com/saikatbsk/Ishara.git
#Setting up paths @ phase 2
echo "Setting up paths @ phase 2"
mkdir -p Ishara/build
cd Ishara/build
echo "Current working directory"
pwd
#Installing Ishara!
echo "Installing Ishara!"
sleep .5s
cmake ..
make
sudo make install
zenity --info --text "Ishara should be installed!"
