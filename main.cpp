#include "Rectangle.h"
#include "Triangle.h"
#include <cstdlib>
#include <iostream>
#include <algorithm>

int main() {
  // create an array of 10 pointers to polygons
  ds::Polygon** shapes = new ds::Polygon*[10];

  // randomly add 5 rectangles to the array
  srand(time(0)); // setting the seed for rand()
  for (int i = 0; i < 5; i++) {
    shapes[i] = new ds::Rectangle(rand() % 10 + 1, rand() % 10 + 1); // generating random numbers by rand()
  }
  // randomly add 5 triangles to the array
  for (int i = 5; i < 10; i++) {
    shapes[i] = new ds::Triangle(rand() % 10 + 1); // generating random numbers by rand()
  }

  std::cout << "Unsorted array of polygons:" << std::endl;
  // Print the array of polygons
  for (int i = 0; i < 10; i++) {
    std::cout << *shapes[i] << std::endl;
  }

  std::cout << "Sorted array of polygons:" << std::endl;
  // Sort the array of polygons
  std::sort(shapes, shapes + 10, [](ds::Polygon* a, ds::Polygon* b) { return *a < *b; });

  // Print the sorted array of polygons
  for (int i = 0; i < 10; i++) {
    std::cout << *shapes[i] << std::endl;
  }

  // Delete the array of polygons
  for (int i = 0; i < 10; i++) {
    delete shapes[i];
  }
  delete[] shapes;

  return 0;
}
