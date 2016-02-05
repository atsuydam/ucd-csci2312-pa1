//
// Created by atsuydam on 2/5/16.
//
#include<iostream>
#include<cmath>
#include "Point.h"
using namespace std;

double computeArea(const Point &p1, const Point &p2, const Point &p3)
{
    // Using Heron's formula of Area = square root (S(S-A)(S-B)(S-C)) where S = (A+B+C)/2. A, B, C are all sides of the triangle.
    double S, A, B, C, area;
    A = p1.distanceTo(p2);
    B = p2.distanceTo(p3);
    C = p3.distanceTo(p1);
    S = (A + B + C)/2;

    area = sqrt(S * ( (S-A) * (S-B) * (S-C)));
    return area;
}
