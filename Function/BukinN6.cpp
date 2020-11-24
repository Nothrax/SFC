//
// Created by nothrax on 24.11.20.
//

#include "BukinN6.h"

double BukinN6::calculateFitness(Point point) {
    return 100*sqrt(fabs(point.y - 0.01*point.x*point.x)) + 0.01*fabs(point.x + 10);
}

double BukinN6::getMinFitness() {
    return 0.0;
}

Point BukinN6::getBoundary() {
    Point point = {51.0,3.0};
    return point;
}