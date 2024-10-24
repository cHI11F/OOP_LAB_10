#ifndef HYPERBOLA_H
#define HYPERBOLA_H

#include "Curve.h"

class Hyperbola : public Curve {
private:
    double a, b;
public:
    Hyperbola(double a, double b);
    double calculateY(double x) const override;
};

#endif 
