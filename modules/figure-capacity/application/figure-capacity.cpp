// Copyright 2020 Shapiro Maksim
#include <iostream>
#include <string>
#include "include/figure_capacity_app.h"

int main(int argc, const char** argv) {
    if (argc == 1) {
        return 1;
    }
    application app;
    std::string out = app(argc, argv);
    std::cout << out;
    return 0;
}
