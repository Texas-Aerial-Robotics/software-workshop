#!/bin/bash

cd ~

#always update/upgrade
sudo apt update && sudo apt upgrade

# Git (if not already installed
sudo apt install git

# Python things
sudo apt install python3

sudo apt install python3-pip

# python packages
pip3 install numpy
pip3 install matplotlib

# opencv for python
pip3 install opencv-contrib-python

# https://github.com/damiafuentes/DJITelloPy 
pip3 install djitellopy

sudo apt install python3.8-venv

pip3 install pygame

# Installing Micro Aerial Vehicle SDK

pip3 install mavsdk
