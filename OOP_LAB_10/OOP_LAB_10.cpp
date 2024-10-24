#include <iostream>
#include <vector>
#include <cmath>
#include "Line.h"
#include "Ellipse.h"
#include "Hyperbola.h"

int main() {
    std::vector<Curve*> curves;

    
    double a, b;
    std::cout << "Enter the parameters for the Line (y = ax + b):" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    curves.push_back(new Line(a, b));

    
    double ellipseA, ellipseB;
    std::cout << "\nEnter the parameters for the Ellipse (x^2/a^2 + y^2/b^2 = 1):" << std::endl;
    std::cout << "a: ";
    std::cin >> ellipseA;
    std::cout << "b: ";
    std::cin >> ellipseB;
    curves.push_back(new Ellipse(ellipseA, ellipseB));

    
    double hyperbolaA, hyperbolaB;
    std::cout << "\nEnter the parameters for the Hyperbola (x^2/a^2 - y^2/b^2 = 1):" << std::endl;
    std::cout << "a: ";
    std::cin >> hyperbolaA;
    std::cout << "b: ";
    std::cin >> hyperbolaB;
    curves.push_back(new Hyperbola(hyperbolaA, hyperbolaB));

    
    double x;
    std::cout << "\nEnter a value for x: ";
    std::cin >> x;

    
    for (const auto& curve : curves) {
        
        if (dynamic_cast<Line*>(curve)) {
            std::cout << "\nType: Line" << std::endl;
        }
        else if (dynamic_cast<Ellipse*>(curve)) {
            std::cout << "\nType: Ellipse" << std::endl;
        }
        else if (dynamic_cast<Hyperbola*>(curve)) {
            std::cout << "\nType: Hyperbola" << std::endl;
        }

        
        double y = curve->calculateY(x);
        if (std::isnan(y)) {
            std::cout << "For x = " << x << ", no real value of y exists." << std::endl;
        }
        else {
            std::cout << "For x = " << x << ", y = " << y << std::endl;
        }
    }

    
    for (auto& curve : curves) {
        delete curve;
    }

    return 0;
}
