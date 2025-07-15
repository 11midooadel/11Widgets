@echo off
robocopy "%cd%" "%cd%\.." *.inc /R:3 /W:1