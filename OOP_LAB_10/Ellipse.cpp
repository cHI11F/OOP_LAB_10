#include "Ellipse.h"
#include <cmath>
#include <limits>

Ellipse::Ellipse(double a, double b) : a(a), b(b) {}

double Ellipse::calculateY(double x) const {
    double temp = 1 - (x * x) / (a * a);
    if (temp < 0) return std::numeric_limits<double>::quiet_NaN();  
    return b * sqrt(temp);
}
