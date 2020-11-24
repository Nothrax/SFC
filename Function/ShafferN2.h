//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_SHAFFERN2_H
#define SFC_SHAFFERN2_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/schaffer2.html
class ShafferN2 : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_SHAFFERN2_H
