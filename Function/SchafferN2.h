//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_SCHAFFERN2_H
#define SFC_SCHAFFERN2_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/schaffer2.html
class SchafferN2 : public Function{
public:
    double calculateFitness(Point point) override;
    std::string getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_SCHAFFERN2_H
