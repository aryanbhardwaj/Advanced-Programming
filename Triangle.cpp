
#include "Triangle.h"
#include "Line.h"
#include "Geometricobjects.h"



void Triangle::draw()
{
	std::cout << "this is a child class Triangle" << std::endl;

	// drawing outer circle from base class
	Geometricobjects::draw_red_circle(100, 125, 50, 2);

	drawtriangle(0.0f, 0.0f, 1.0f);
}



void Triangle::drawtriangle(const float& red, const float& green, const float& blue)
{
	Line::drawLine(75, 100, 125, 100, red, green, blue);
	Line::drawLine(75, 100, 100, 150, red, green, blue);
	Line::drawLine(125, 100, 100, 150, red, green, blue);
}
