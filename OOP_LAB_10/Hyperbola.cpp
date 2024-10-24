#include "Hyperbola.h"
#include <cmath>
#include <limits>

Hyperbola::Hyperbola(double a, double b) : a(a), b(b) {}

double Hyperbola::calculateY(double x) const {
    double temp = (x * x) / (a * a) - 1;
    if (temp < 0) return std::numeric_limits<double>::quiet_NaN();  
    return b * sqrt(temp);
}
