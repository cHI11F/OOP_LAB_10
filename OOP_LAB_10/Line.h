#ifndef LINE_H
#define LINE_H

#include "Curve.h"

class Line : public Curve {
private:
    double a, b;
public:
    Line(double a, double b);
    double calculateY(double x) const override;
};

#endif 
