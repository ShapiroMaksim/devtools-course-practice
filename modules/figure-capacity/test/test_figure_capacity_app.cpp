// Copyright 2020 Shapiro Maksim
#include <gtest/gtest.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <vector>
#include "include/figure_capacity_app.h"

TEST(application, can_create_application) {
	
	EXPECT_NO_THROW(application app);
}

TEST(application, can_create_sphere) {
	application app;
	std::vector<std::string> params;
	params.push_back("Sphere");
	params.push_back("2.2");
	EXPECT_NO_THROW(app.create(params));
}

TEST(application, cant_create_sphere_without_parameters) {
	application app;
	std::vector<std::string> params;
	params.push_back("Sphere");
	EXPECT_ANY_THROW(app.create(params));
}

TEST(application, can_calculate_capacity_of_sphere) {
	application app;
	Figure* figure = NULL;
	double res;

	std::vector<std::string> params;
	params.push_back("Sphere");
	params.push_back("2.2");

	figure = app.create(params);
	res = figure->capacity();
	EXPECT_EQ(2.2 * 2.2 * 2.2 * M_PI * 4 / 3, res);
}

TEST(application, can_create_cylinder) {
	application app;
	std::vector<std::string> params;
	params.push_back("Cylinder");
	params.push_back("2.2");
	params.push_back("2.2");
	EXPECT_NO_THROW(app.create(params));
}

TEST(application, cant_create_cylinder_without_parameters) {
	application app;
	std::vector<std::string> params;
	params.push_back("Cylinder");
	params.push_back("2.2");
	EXPECT_ANY_THROW(app.create(params));
}

TEST(application, can_create_parallelepiped) {
	application app;
	std::vector<std::string> params;
	params.push_back("Parallelepiped");
	params.push_back("2.2");
	params.push_back("2.2");
	params.push_back("2.2");
	EXPECT_NO_THROW(app.create(params));
}

TEST(application, cant_create_parallelepiped_without_parameters) {
	application app;
	std::vector<std::string> params;
	params.push_back("Parallelepiped");
	params.push_back("2.2");
	params.push_back("2.2");
	EXPECT_ANY_THROW(app.create(params));
}

TEST(application, cant_create_figure_with_invalid_type) {
	application app;
	std::vector<std::string> params;
	params.push_back("type");
	params.push_back("2.2");
	params.push_back("2.2");
	EXPECT_ANY_THROW(app.create(params));
}