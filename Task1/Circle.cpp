#include "Circle.h"
#include <iostream>
#include <math.h>

Circle::Circle(Point2D nPosition, int RGB_color, int nAlpha, int nRadius) : Shape(nPosition, RGB_color, nAlpha), radius(nRadius) {}

const void Circle::render(SDL_Renderer* renderer) const {
	if (Alpha > 255) {
		std::cout << "Circle Alpha over 255" << std::endl;
		return;
	}
	SDL_SetRenderDrawColor(renderer, ((RGB >> 16) & 0xFF), ((RGB >> 8) & 0xFF), ((RGB) & 0xFF), Alpha);

	const float diameter = (radius * 2);


	float center_x = position.getX() + radius;
	float center_y = position.getY() + radius;
	float x0, y0, x1, y1;
	float angle = 0;
	float steps = 3;


	while (angle < 360) {
		x0 = center_x + radius * cos(angle * (M_PI / 180));
		y0 = center_y + radius * sin(angle * (M_PI / 180));
		angle += steps;
		x1 = center_x + radius * cos(angle * (M_PI / 180));
		y1 = center_y + radius * sin(angle * (M_PI / 180));
		
		SDL_RenderDrawLine(renderer, x0, y0, x1, y1);
	}
}