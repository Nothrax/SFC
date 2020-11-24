//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_STYBLINSKITANG_H
#define SFC_STYBLINSKITANG_H

#include "Function.h"
//https://www.sfu.ca/~ssurjano/stybtang.html
class StyblinskiTang : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_STYBLINSKITANG_H
