#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(Point2D nPosition, int RGBA_color, int nAlpha, int nWidth, int nHeight) : Shape(nPosition, RGBA_color, nAlpha), width(nWidth), height(nHeight) {}

const void Rectangle::render(SDL_Renderer* renderer) const {
	if (Alpha > 255) {
		std::cout << "Rectangle Alpha over 255" << std::endl;
		return;
	}
	SDL_SetRenderDrawColor(renderer, ((RGB >> 16) & 0xFF), ((RGB >> 8) & 0xFF), ((RGB) & 0xFF), Alpha);
	SDL_RenderDrawLine(renderer, position.getX(), position.getY(), position.getX() + width, position.getY());
	SDL_RenderDrawLine(renderer, position.getX(), position.getY(), position.getX(), position.getY() + height);
	SDL_RenderDrawLine(renderer, position.getX() + width, position.getY(), position.getX() + width, position.getY() + height);
	SDL_RenderDrawLine(renderer, position.getX(), position.getY() + height, position.getX() + width, position.getY() + height);

}