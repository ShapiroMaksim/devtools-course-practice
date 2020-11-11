// Copyright 2020 Shapiro Maksim
#include "include/figure_capacity_app.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string application::operator()(int argc, const char** argv) {
    Figure* _figure = nullptr;
    std::vector<std::string> arg;
    if (argc < 1) {
        throw "No parameters";
    }
    for (int i = 1; i < argc; i++) {
        arg.push_back(argv[i]);
    }
    _figure = create(arg);
    double capacity = _figure->capacity();
    std::ostringstream strs;
    strs << "Capacity of figure: " << capacity;
    return strs.str();
}

Figure* application::create(std::vector<std::string> arg) {
    Figure* result = nullptr;
    if (arg[0] == "Sphere") {
        if (arg.size() < 2) {
            throw "Missing parameters";
        }
        result = new Sphere(std::stof(arg[1]));
    } else if (arg[0] == "Cylinder") {
        if (arg.size() < 3) {
            throw "Missing parameters";
        }
        result = new Cylinder(std::stof(arg[1]), std::stof(arg[2]));
    } else if (arg[0] == "Parallelepiped") {
        if (arg.size() < 4) {
            throw "Missing parameters";
        }
        double _arg[3];
        _arg[0] = std::stof(arg[1]);
        _arg[1] = std::stof(arg[2]);
        _arg[2] = std::stof(arg[3]);
        result = new Parallelepiped(_arg[0], _arg[1], _arg[2]);
    } else {
        throw "Invalid figure type";
    }
    return result;
}
