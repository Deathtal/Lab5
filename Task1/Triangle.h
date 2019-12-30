#pragma once
#include "Shape.h"

class Triangle : public Shape {
private:
	float width, height;
public:
	Triangle(Point2D nPosition, int RGB_color, int nAlpha, int nWidth, int nHeight);
	const void render(SDL_Renderer* renderer) const;
};