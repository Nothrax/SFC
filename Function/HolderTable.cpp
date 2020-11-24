//
// Created by nothrax on 24.11.20.
//

#include "HolderTable.h"

double HolderTable::calculateFitness(Point point) {
    return -fabs(sin(point.x)*cos(point.y)*exp(fabs(1-(sqrt(point.x*point.x + point.y*point.y)/M_PI))));
}

double HolderTable::getMinFitness() {
    return -19.2085;
}

Point HolderTable::getBoundary() {
    Point point = {10.0,10.0};
    return point;
}