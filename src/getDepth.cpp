#include "h/camera.h"
#include <iostream>
#include <librealsense2/rs.hpp>

using namespace rs2;

void getDepth()
{
	/*
	// Create a Pipeline, which serves as a top-level API for streaming and processing frames
	pipeline p;

	// Configure and start the pipeline
	p.start();

	while (true)
	{
		// Block program until frames arrive
		frameset frames = p.wait_for_frames();

		// Try to get a frame of a depth image
		depth_frame depth = frames.get_depth_frame();
		// The frameset might not contain a depth frame, if so continue until it does
		if (!depth) continue;

		// Get the depth frame's dimensions
		float width = depth.get_width();
		float height = depth.get_height();
		float depthValues[128][72];

		for (int h = 0; h < 720; h = h + 10) {
			for (int w = 0; w < 1280; w = w + 10) {
				float currentDepth = depth.get_distance(w, h);
				depthValues[w / 10][h / 10] = currentDepth;
			}
		}

		// Query the distance from the camera to the object in the center of the image
		float dist_to_center = depth.get_distance(width / 2, height / 2);

		// Print the distance 

		std::cout << "The camera is facing an object " << dist_to_center << " meters away \r";
	}
	*/
}