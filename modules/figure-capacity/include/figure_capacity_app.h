// Copyright 2020 Shapiro Maksim
#ifndef MODULES_FIGURE_CAPACITY_INCLUDE_FIGURE_CAPACITY_APP_H_
#define MODULES_FIGURE_CAPACITY_INCLUDE_FIGURE_CAPACITY_APP_H_
#include <math.h>
#include <string>
#include <vector>
#include "figure_capacity.h"

class application {
 public:
    std::string operator()(int argc, char** argv);
    Figure* create(std::vector<std::string> arg);
};

#endif  // MODULES_FIGURE_CAPACITY_INCLUDE_FIGURE_CAPACITY_APP_H_
