// Copyright 2020 Shapiro Maksim
#include "include/figure_capacity.h"
#define _USE_MATH_DEFINES
#include <math.h>

Sphere::Sphere() {
    radius = 1;
}

Sphere::Sphere(double _radius) {
    if (_radius <= 0)
        throw "Invalid radius";
    radius = _radius;
}

double Sphere::getRadius() {
    return radius;
}

double Sphere::capacity() {
    double result;
    result = radius * radius * radius * M_PI * 4 / 3;
    return result;
}

Cylinder::Cylinder() {
    radius = 1;
    height = 1;
}

Cylinder::Cylinder(double _radius, double _height) {
    if (_radius <= 0)
        throw "Invalid radius";
    if (_height <= 0)
        throw "Invalid height";
    radius = _radius;
    height = _height;
}

double Cylinder::getRadius() {
    return radius;
}

double Cylinder::getHeight() {
    return height;
}

double Cylinder::capacity() {
    return radius * radius * M_PI * height;
}

Parallelepiped::Parallelepiped() {
    width = 1;
    length = 1;
    height = 1;
}

Parallelepiped::Parallelepiped(double _width, double _length, double _height) {
    if (_width <= 0)
        throw "Invalid width";
    if (_length <= 0)
        throw "Invalid length";
    if (_height <= 0)
        throw "Invalid height";
    width = _width;
    length = _length;
    height = _height;
}

double Parallelepiped::getWidth() {
    return width;
}

double Parallelepiped::getLength() {
    return length;
}

double Parallelepiped::getHeight() {
    return height;
}

double Parallelepiped::capacity() {
    return width * length * height;
}
