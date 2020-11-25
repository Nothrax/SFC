//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_DROPWAVE_H
#define SFC_DROPWAVE_H
#include "Function.h"


//https://www.sfu.ca/~ssurjano/drop.html
class DropWave : public Function{
public:
    double calculateFitness(Point point) override;
    std::string getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_DROPWAVE_H
