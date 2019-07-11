#include <stdio.h>
#include <irrKlang.h>
#include <conio.h>
#include "sounds.h"

using namespace irrklang;


irrklang::ISound* playMusic() {

	ISoundEngine* engine = createIrrKlangDevice();

	if (!engine)
	{
		printf("Could not startup engine\n");
		return NULL; // error starting up the engine
	}

	// tells the engine to play it looped.

	// play some sound stream, looped
	irrklang::ISound* getOutSnd = engine->play2D("media/getout.ogg", true, false, true);
	if (getOutSnd) {
		getOutSnd->setVolume(.5);
	}
	return getOutSnd;
}

void changeVolume(float volume, irrklang::ISound* snd) {

	snd->setVolume(volume);
}