#pragma once
#include <iostream>

class Point2D {
private:
	float x, y;
public:
	Point2D();

	Point2D(float nX, float nY);

	Point2D(const Point2D& nP);

	const Point2D operator+ (const Point2D& nP);
	const Point2D operator- (const Point2D& nP);
	const Point2D& operator= (const Point2D& nP);
	const bool operator== (const Point2D& nP);

	const void setX(const float& nX);
	const void setY(const float& nY);
	const void set(const float& nX, const float& nY);

	const float getX() const;
	const float getY() const;

	const float getDistance(const Point2D& nP) const;

	const std::string toString() const;
};