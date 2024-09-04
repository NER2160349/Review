#pragma once

#include "Polygon.h"

namespace ds {
    // Assuming that Triangle is a right triangle...
    class Triangle : public Polygon {
      public:
        // Note: just one input to the constructor for width and height
        Triangle(int height): Polygon(height, height) {};
        ~Triangle() {};

        int area() const override;
        void print() const override;
    };
} // namespace ds