#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
	int radius;
public:
	Circle(Point2D nPosition, int RGB_color, int nAlpha, int nRadius);
	const void render(SDL_Renderer* renderer) const;
};