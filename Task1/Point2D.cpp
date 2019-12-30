#include "Point2D.h"
#include <math.h>
#include <string>

Point2D::Point2D() : x(0), y(0) {}

Point2D::Point2D(float nX, float nY) {
	x = nX;
	y = nY;
}

const void Point2D::setX(const float& nX) {
	x = nX;
}
const void Point2D::setY(const float& nY) {
	y = nY;
}
const void Point2D::set(const float& nX, const float& nY) {
	x = nX;
	y = nY;
}


const float Point2D::getX() const {
	return x;
}
const float Point2D::getY() const {
	return y;
}

Point2D::Point2D(const Point2D& nP) {
	x = nP.getX();
	y = nP.getY();
}

const Point2D Point2D::operator+(const Point2D& nP) {
	Point2D result(x + nP.getX(), y + nP.getY());
	return result;
}

const Point2D Point2D::operator-(const Point2D& nP) {
	Point2D result(x - nP.getX(), y - nP.getY());
	return result;
}

const Point2D& Point2D::operator=(const Point2D& nP) {
	x = nP.getX();
	y = nP.getY();
	return *this;
}

const bool Point2D::operator==(const Point2D& nP) {
	return x == nP.getX() && y == nP.getY();
}

const float Point2D::getDistance(const Point2D& nP) const {
	return hypot(nP.getX() - x, nP.getY() - y);
}

const std::string Point2D::toString() const {
	return "[" + std::to_string(x) + ", " + std::to_string(y) + "]";
}