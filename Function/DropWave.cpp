//
// Created by nothrax on 24.11.20.
//

#include "DropWave.h"

double DropWave::calculateFitness(Point point) {
    return -(1+cos(12*sqrt(point.x*point.x + point.y*point.y)))/(0.5*(point.x*point.x + point.y*point.y) + 2);
}

double DropWave::getMinFitness() {
    return -1.0;
}

Point DropWave::getBoundary() {
    Point point = {6.0,6.0};
    return point;
}