#include <iostream>
using namespace std;

/**
 * @class Rectangle
 * @brief This class represents a rectangle and provides methods to compute its area and perimeter.
 * 
 * The Rectangle class has two private attributes for length and width. It provides public methods to
 * set the values for these attributes, compute the area, and compute the perimeter of the rectangle.
 */
class Rectangle {
private:
    float length; /**< Length of the rectangle */
    float width;  /**< Width of the rectangle */

public:
    /**
     * @brief Constructor to initialize length and width.
     * 
     * This constructor sets the initial values for length and width.
     * 
     * @param l The length of the rectangle.
     * @param w The width of the rectangle.
     */
    Rectangle(float l, float w) : length(l), width(w) {}

    /**
     * @brief Set the length of the rectangle.
     * @param l The new length.
     */
    void setLength(float l) {
        length = l;
    }

    /**
     * @brief Set the width of the rectangle.
     * @param w The new width.
     */
    void setWidth(float w) {
        width = w;
    }

    /**
     * @brief Get the area of the rectangle.
     * @return float The area of the rectangle.
     */
    float getArea() {
        return length * width;
    }

    /**
     * @brief Get the perimeter of the rectangle.
     * @return float The perimeter of the rectangle.
     */
    float getPerimeter() {
        return 2 * (length + width);
    }

    /**
     * @brief Display the details of the rectangle.
     */
    void display() {
        cout << "Rectangle [Length: " << length << ", Width: " << width << "]\n";
        cout << "Area: " << getArea() << ", Perimeter: " << getPerimeter() << endl;
    }
};

/**
 * @brief Main function to test the Rectangle class.
 * 
 * The main function creates an object of the Rectangle class and demonstrates
 * its functionality by setting values and displaying results.
 */
int main() {
    // Create an object of Rectangle class
    Rectangle rect(10, 5);

    // Display the details of the rectangle
    rect.display();

    // Modify the dimensions
    rect.setLength(15);
    rect.setWidth(7);

    // Display the updated details
    rect.display();

    return 0;
}
