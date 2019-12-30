#pragma once
#include "Point2D.h"
#include "SDL.h"

class Shape {
protected:
	Point2D position;
	int RGB;
	short Alpha;
public:
	Shape(Point2D nPosition, int RGB_color, int nAlpha);

	virtual const void render(SDL_Renderer* renderer) const = 0;
};