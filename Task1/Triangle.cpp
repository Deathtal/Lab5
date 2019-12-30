#include "Triangle.h"
#include <iostream>

Triangle::Triangle(Point2D nPosition, int RGB_color, int nAlpha, int nWidth, int nHeight) : Shape(nPosition, RGB_color, nAlpha), width(nWidth), height(nHeight) {}

const void Triangle::render(SDL_Renderer* renderer) const {
	if (Alpha > 255) {
		std::cout << "Triangle Alpha over 255" << std::endl;
		return;
	}
	SDL_SetRenderDrawColor(renderer, ((RGB >> 16) & 0xFF), ((RGB >> 8) & 0xFF), ((RGB) & 0xFF), Alpha);
	SDL_RenderDrawLine(renderer, position.getX(), position.getY(), position.getX() + width, position.getY());
	SDL_RenderDrawLine(renderer, position.getX(), position.getY(), position.getX(), position.getY() + height);
	SDL_RenderDrawLine(renderer, position.getX(), position.getY() + height, position.getX() + width, position.getY());
}