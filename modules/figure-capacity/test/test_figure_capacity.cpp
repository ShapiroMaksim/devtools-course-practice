// Copyright 2020 Shapiro Maksim
#include <gtest/gtest.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "include/figure_capacity.h"

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

TEST(Sphere, Can_calculate_capacity_of_sphere) {
    // Arrange
    Sphere s(5);
    double res;
    // Act
    res = s.capacity();
    // Assert
    EXPECT_EQ(5 * 5 * 5 * M_PI * 4 / 3, res);
}

TEST(Cylinder, Can_create_cylinder) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Cylinder c);
}

TEST(Cylinder, Can_create_cylinder_with_parameters) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Cylinder c(2, 2));
}

TEST(Cylinder, Can_create_cylinder_with_rational_parameters) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Cylinder c(1.1, 2.3));
}

TEST(Cylinder, Can_get_radius_of_cylinder) {
    // Arrange & Act
    Cylinder c(5.1, 2);
    // Assert
    EXPECT_EQ(5.1, c.getRadius());
}

TEST(Cylinder, Can_get_radius_of_cylonder_with_another_parameter) {
    // Arrange & Act
    Cylinder c(10, 32);
    // Assert
    EXPECT_EQ(10, c.getRadius());
}

TEST(Cylinder, Can_get_height_of_cylinder) {
    // Arrange & Act
    Cylinder c(5.1, 2);
    // Assert
    EXPECT_EQ(2, c.getHeight());
}

TEST(Cylinder, Can_get_height_of_cylonder_with_another_parameter) {
    // Arrange & Act
    Cylinder c(10, 32.2);
    // Assert
    EXPECT_EQ(32.2, c.getHeight());
}

TEST(Cylinder, Cant_create_cylinder_with_negative_radius) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Cylinder c(-5, 1));
}

TEST(Cylinder, Cant_create_cylinder_with_zero_radius) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Cylinder c(0, 1));
}

TEST(Cylinder, Cant_create_cylinder_with_negative_height) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Cylinder c(1, -1));
}

TEST(Cylinder, Cant_create_cylinder_with_zero_height) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Cylinder c(2, 0));
}

TEST(Cylinder, Can_calculate_capacity_of_cylinder) {
    // Arrange
    Cylinder c(5, 15);
    double res;
    // Act
    res = c.capacity();
    // Assert
    EXPECT_EQ(5 * 5 * M_PI * 15, res);
}

TEST(Parallelepiped, Can_create_parallelepiped) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Parallelepiped p);
}

TEST(Parallelepiped, Can_create_parallelepiped_with_parameters) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Parallelepiped p(2, 3, 4));
}

TEST(Parallelepiped, Can_create_parallelepiped_with_rational_parameters) {
    // Arrange & Act & Assert
    EXPECT_NO_THROW(Parallelepiped p(2.3, 3.5, 4.4));
}

TEST(Parallelepiped, Can_get_width_of_parallelepiped) {
    // Arrange & Act
    Parallelepiped p(3, 2, 1);
    // Assert
    EXPECT_EQ(3, p.getWidth());
}

TEST(Parallelepiped, Can_get_width_of_parallelepiped_with_another_parameters) {
    // Arrange & Act
    Parallelepiped p(4.5, 1.1, 18);
    // Assert
    EXPECT_EQ(4.5, p.getWidth());
}

TEST(Parallelepiped, Can_get_length_of_parallelepiped) {
    // Arrange & Act
    Parallelepiped p(3, 2, 1);
    // Assert
    EXPECT_EQ(2, p.getLength());
}

TEST(Parallelepiped, Can_get_length_of_parallelepiped_with_another_parameters) {
    // Arrange & Act
    Parallelepiped p(4.5, 1.1, 18);
    // Assert
    EXPECT_EQ(1.1, p.getLength());
}

TEST(Parallelepiped, Can_get_height_of_parallelepiped) {
    // Arrange & Act
    Parallelepiped p(3, 2, 3);
    // Assert
    EXPECT_EQ(3, p.getHeight());
}

TEST(Parallelepiped, Can_get_height_of_parallelepiped_with_another_parameters) {
    // Arrange & Act
    Parallelepiped p(4.5, 1.1, 1.8);
    // Assert
    EXPECT_EQ(1.8, p.getHeight());
}

TEST(Parallelepiped, Cant_create_parallelepiped_with_negative_width) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Parallelepiped p(-2.3, 3.5, 4.4));
}

TEST(Parallelepiped, Cant_create_parallelepiped_with_zero_width) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Parallelepiped p(0, 3.5, 4.4));
}

TEST(Parallelepiped, Cant_create_parallelepiped_with_negative_length) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Parallelepiped p(2.3, -3.5, 4.4));
}

TEST(Parallelepiped, Cant_create_parallelepiped_with_zero_length) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Parallelepiped p(2.3, 0, 4.4));
}

TEST(Parallelepiped, Cant_create_parallelepiped_with_negative_height) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Parallelepiped p(2.3, 3.5, -4.4));
}

TEST(Parallelepiped, Cant_create_parallelepiped_with_zero_height) {
    // Arrange & Act & Assert
    EXPECT_ANY_THROW(Parallelepiped p(2.3, 3.5, 0));
}

TEST(Cylinder, Can_calculate_capacity_of_parallelepiped) {
    // Arrange
    Parallelepiped p(5, 15, 4.4);
    double res;
    // Act
    res = p.capacity();
    // Assert
    EXPECT_EQ(5 * 15 * 4.4, res);
}
