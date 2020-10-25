// Copyright 2020 Shapiro Maksim
#include "include/figure_capacity.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <gtest/gtest.h>

TEST(Sphere, Can_create_sphere) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Sphere s);
}

TEST(Sphere, Can_create_sphere_with_parameter) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Sphere s(1));
}

TEST(Sphere, Can_create_sphere_with_rational_parameter) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Sphere s(1.1));
}

TEST(Sphere, Can_get_radius_of_sphere) {
    // Arrange & Act
    Sphere s(1);
    // Assert
    EXPECT_EQ(1, s.getRadius());
}

TEST(Sphere, Can_get_radius_of_sphere_with_another_parameter) {
    // Arrange & Act
    Sphere s(1.2);
    // Assert
    EXPECT_EQ(1.2, s.getRadius());
}

TEST(Sphere, Cant_create_sphere_with_negative_radius) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Sphere s(-5));
}

TEST(Sphere, Cant_create_sphere_with_zero_radius) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Sphere s(0));
}

TEST(Sphere, Cant_calculate_capacity_of_sphere) {
    // Arrange
    Sphere s(5);
    double res;
    // Act
    res = s.capacity();
    // Assert
    EXPECT_EQ(5 * 5 * 5 * M_PI * 4 / 3, res);
}
