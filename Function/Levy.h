//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_LEVY_H
#define SFC_LEVY_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/levy.html
class Levy : public Function{
public:
    double calculateFitness(Point point) override;
    std::string getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_LEVY_H
