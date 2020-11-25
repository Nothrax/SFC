//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_HOLDERTABLE_H
#define SFC_HOLDERTABLE_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/holder.html
class HolderTable : public Function{
public:
    double calculateFitness(Point point) override;
    std::string getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_HOLDERTABLE_H
