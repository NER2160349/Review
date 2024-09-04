#pragma once

#include <iostream>

namespace ds {

/** Array of integers. */
class Polygon {
  protected:
    int width, height;
  public:
    void set_values(int a, int b) { width = a; height = b; }
    explicit Polygon(int width, int height): width(width), height(height) {};
    ~Polygon() {};

    // Pure virtual area function to be implemented by derived classes.
    virtual int area() const = 0;
    // Pure virtual print function to be implemented by derived classes.
    // https://stackoverflow.com/a/12142943
    virtual void print() const = 0;

    // We cannot have virtual friend functions, so we have to use a non-member function.
    // We call the print function from the friend function, which is virtual...
    // https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
    friend std::ostream& operator<<(std::ostream& os, const Polygon& p)
    {
        p.print();
        return os;
    };

    friend bool operator<(const Polygon& lhs, const Polygon& rhs)
    {
        // TODO: 
        //  * Try sorting by width or height
        //  * Try sorting by perimeter
        return lhs.area() < rhs.area();
    };
};

} // namespace ds
