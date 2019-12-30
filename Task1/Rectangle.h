#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
	int width, height;
public:
	Rectangle(Point2D nPosition, int RGB_color, int nAlpha, int nWidth, int nHeight);
	const void render(SDL_Renderer* renderer) const;
};