#include "Line.h"

Line::Line(double a, double b) : a(a), b(b) {}

double Line::calculateY(double x) const {
    return a * x + b;
}
