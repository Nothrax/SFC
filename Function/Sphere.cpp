//
// Created by nothrax on 24.11.20.
//

#include "Sphere.h"
double Sphere::calculateFitness(Point point) {
    return point.x*point.x + point.y*point.y;
}

double Sphere::getMinFitness() {
    return 0.0;
}

Point Sphere::getBoundary() {
    Point point = {6.0,6.0};
    return point;
}