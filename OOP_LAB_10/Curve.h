#ifndef CURVE_H
#define CURVE_H

class Curve {
public:
    virtual double calculateY(double x) const = 0;  
    virtual ~Curve() {}  
};

#endif 
