// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H
//CONSTRUCTORS for Point
// Point::Point()
//    PostCondition: Sets the three points, (x, y, z) of the default constructor to zero.
// Point::Point(double x, double, y, double z)
//    PostCondition: Sets the three points, (x, y, z) to the arguments given.
//
//MUTATORS
// void Point::setX(double newX)
//      PostCondition: sets the private variable __x to the value of newX
// void Point::setY(double newY)
//      PostCondition: sets the private variable __y to the value of newY
// void Point::setZ(double newZ)
//      Post condition: sets the private variable __z to the value of newZ
//
//ACCESSORS
// double Point::getX()
//      PostCondition: returns the value stored in the private variable __x
// double Point::getY()
//      PostCondition: returns the value stored in the private variable __y
// double Point::getZ()
//      PostCondition: returns the value stored in the private variable __z
//
//MEMBER FUNCTIONS
// double Point::distanceTo(const Point &p1)
//      PostCondition: returns the calculated distance between two point as
//      a double value.
class Point {
    
private:
    double __x, __y, __z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Member Functions
    double distanceTo(const Point &p1) const;
    
};

#endif // __POINT_H
