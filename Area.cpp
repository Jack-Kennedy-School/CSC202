#include <iostream>

struct Rectangle {
    double width;
    double height;
};

double findArea(Rectangle rect) {
    return rect.width * rect.height;
}

int main() {
    Rectangle myRect = { 5.0, 10.0 };
    double area = findArea(myRect);
    std::cout << "The area of the rectangle is: " << area << std::endl;
    return 0;
}
