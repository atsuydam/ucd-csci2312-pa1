//
// Created by atsuydam (Amanda Suydam )on 2/5/16
//
#include <cmath>
#include "Point.h"
using namespace std;

Point::Point()
{
    __x = 0;
    __y = 0;
    __z = 0;
}

Point::Point(double x, double y)
{
    __x = x;
    __y = y;
    __z = 0;
}

Point::Point(double x, double y, double z)
{
    __x = x;
    __y = y;
    __z = z;
}

void Point::setX(double newX)
{
    __x = newX;
}

void Point::setY(double newY)
{
    __y = newY;
}

void Point::setZ(double newZ)
{
    __z = newZ;
}

double Point::getX() const
{
    return __x;
}

double Point::getY() const
{
    return __y;
}

double Point::getZ() const
{
    return __z;
}

double Point::distanceTo(const Point &A) const
{
    double distance, x_vector, y_vector, z_vector;
    x_vector = A.__x + __x;
    y_vector = A.__y + __y;
    z_vector = A.__z + __z;
    distance = sqrt((x_vector * x_vector) + (y_vector * y_vector) + (z_vector * z_vector));

    return distance;
}