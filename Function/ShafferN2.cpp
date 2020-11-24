//
// Created by nothrax on 24.11.20.
//

#include "ShafferN2.h"

double ShafferN2::calculateFitness(Point point) {
    return 0.5 + (pow((sin(point.x*point.x - point.y*point.y)-0.5),2))/(pow((1 + 0.001*(point.x*point.x + point.y*point.y)),2));
}

double ShafferN2::getMinFitness() {
    return 0.0;
}

Point ShafferN2::getBoundary() {
    Point point = {10.0,10.0};
    return point;
}