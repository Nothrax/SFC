//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_BUKINN6_H
#define SFC_BUKINN6_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/bukin6.html
class BukinN6 : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_BUKINN6_H
