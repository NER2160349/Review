#include "Rectangle.h"

// For more on Doxygen comments, see:
// https://github.com/cme212/course/blob/master/notes/lecture-03/specifications.md

namespace ds {
    /**
     * @brief Calculate the area of the rectangle.
     * 
     * @return int The area of the rectangle.
     */
    int Rectangle::area() const {
        // TODO: Implement the area function.
        int area = width * height;

        return area;
    }

    /**
     * @brief Print the rectangle.
     * 
     */
    void Rectangle::print() const {
        // TODO: Implement the print function.
        //  * BASIC:
        //    * Print the width and height of the rectangle
        //  * BONUS:
        //    * Print the shape of the rectangle using the width and height
        //    * For example, if the width is 3 and the height is 2, print:
        //      * ---
        //      * ---
        //    * For example, if the width is 2 and the height is 3, print:
        //      * --
        //      * --
        //      * --
        //    * Try:
        //      * Adding color (random color per character?)
        //      * Adding a border / empty middle
        //      * Adding a fill
        std::cout<< width << " and " << height << std::endl;

        for(int i = 1; i <= width; i++){
        
        for(int k = 1; k <= height; k++){
            if(i == 1 || i == width || k == 1 || k == height)
            {
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
        }
        std::cout<< std::endl;
    }
    }
} // namespace ds
