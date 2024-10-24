#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Curve.h"

class Ellipse : public Curve {
private:
    double a, b;
public:
    Ellipse(double a, double b);
    double calculateY(double x) const override;
};

#endif 
