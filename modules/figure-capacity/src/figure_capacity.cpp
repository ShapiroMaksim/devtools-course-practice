// Copyright 2020 Shapiro Maksim

#include "include/figure_capacity.h"
#define _USE_MATH_DEFINES
#include <math.h>

Sphere::Sphere() 
{
	radius = 1;
}

Sphere::Sphere(double _radius) 
{
	if (_radius <= 0)
		throw "Invalid radius";
	radius = _radius;
}
 
double Sphere::getRadius()
{
	return radius;
}

double Sphere::capacity() 
{
	double result;
	result = radius * radius * radius * M_PI * 4 / 3;
	return result;
}