#pragma once
#include <stdio.h>
#include <irrKlang.h>
#include <conio.h>

irrklang::ISound* playMusic();
void changeVolume(float volume, irrklang::ISound* snd);
