// Copyright 2020 Shapiro Maksim
#ifndef MODULES_FIGURE_CAPACITY_INCLUDE_FIGURE_CAPACITY_H_
#define MODULES_FIGURE_CAPACITY_INCLUDE_FIGURE_CAPACITY_H_
#include<math.h>

class Figure {
 public:
    virtual double capacity() = 0;
};

class Sphere : public Figure {
    double radius;
 public:
    Sphere();
    explicit Sphere(double _radius);
    double getRadius();
    double capacity();
};

class Cylinder : public Figure {
    double radius;
    double height;
 public:
    Cylinder();
    Cylinder(double _radius, double _height);
    double getRadius();
    double getHeight();
    double capacity();
};
#endif  // MODULES_FIGURE_CAPACITY_INCLUDE_FIGURE_CAPACITY_H_
