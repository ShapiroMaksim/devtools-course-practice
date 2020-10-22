// Copyright 2020 Shapiro Maksim

#include<math.h>

#ifndef MODULES_FIGURE_CAPASITY_INCLUDE_FIGURE_CAPACITY_H_
#define MODULES_FIGURE_CAPASITY_INCLUDE_FIGURE_CAPACITY_H_

class Figure {
public:
	virtual double capacity() = 0;
};

class Sphere : Figure{
	double radius;
public:
	Sphere();
	Sphere(double _radius);
	double getRadius();
	double capacity();
};



#endif 