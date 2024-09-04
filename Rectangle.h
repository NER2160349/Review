#pragma once

#include "Polygon.h"

namespace ds {
    class Rectangle : public Polygon {
      public:
        Rectangle(int width, int height): Polygon(width, height) {};
        ~Rectangle() {};

        int area() const override;
        void print() const override;
    };
} // namespace ds