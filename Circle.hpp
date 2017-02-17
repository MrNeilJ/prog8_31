// This header file contains the circle class declaration

#ifndef PROG8_31_CIRCLE_HPP
#define PROG8_31_CIRCLE_HPP
#include <cmath>


class Circle {
private:
    double radius;
    int centerX, centerY;

public:
    Circle()
    {
        radius = 1.0;                               // Default constructor
        centerX = centerY = 0;                      // accepts no arguments
    }

    Circle(double r)
    {
        radius = r;                                 // Constructor 2
        centerX = centerY = 0;                      // accepts 1 argument
    }

    Circle(double r, int x, int y)
    {
        radius = r;                                 // Constructor 3
        centerX = x;                                // accepts 3 arguments
        centerY = y;
    }

    void setRadius(double r)
    {
        radius = r;
    }

    int getXCoord()
    {
        return centerX;
    }

    int getYCoord()
    {
        return centerY;
    }

    double findArea()
    {
        return 3.14 * pow(radius, 2);
    }
};


#endif //PROG8_31_CIRCLE_HPP
