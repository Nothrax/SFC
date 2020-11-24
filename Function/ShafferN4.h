//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_SHAFFERN4_H
#define SFC_SHAFFERN4_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/schaffer4.html
class ShafferN4 : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};



#endif //SFC_SHAFFERN4_H
