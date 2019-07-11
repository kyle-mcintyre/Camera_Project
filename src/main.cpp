#include <stdlib.h>
#include "camera.h"
#include <librealsense2/rs.hpp> // Include RealSense Cross Platform API
#include <stdio.h>
#include <iostream>
#include <irrKlang.h>
#include <conio.h>
#include "sounds.h"

float getMiddle(rs2::pipeline pipe);

int main() {
	float dist_to_center = 0;
	float vol = 0;
	irrklang::ISound* sound = playMusic();

	// Create and start pipeline
	rs2::pipeline p;
	p.start();

	while (true)
	{
		dist_to_center = getMiddle(p);
		vol = (dist_to_center / 4) * 1;
		changeVolume(vol, sound);

		// Print the distance
		std::cout << "The camera is facing an object " << dist_to_center << " meters away \r";
	}
	return 0;
}

float getMiddle(rs2::pipeline pipe) {

	// Block program until frames arrive
	rs2::frameset frames = pipe.wait_for_frames();

	// Try to get a frame of a depth image
	rs2::depth_frame depth = frames.get_depth_frame();

	// Get the depth frame's dimensions
	float width = depth.get_width();
	float height = depth.get_height();

	// Query the distance from the camera to the object in the center of the image
	float dist = depth.get_distance(width / 2, height / 2);

	return dist;
}