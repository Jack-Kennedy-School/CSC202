#include <iostream>

struct Point {
    int x;
    int y;
};

struct Rectangle {
    Point upperLeft;
    int width;
    int height;
};

Point lowerRight(Rectangle rect) {
    Point result = {rect.upperLeft.x + rect.width, rect.upperLeft.y + rect.height};
    return result;
}

int main() {
    Rectangle rect = {{1, 1}, 5, 3};
    Point p = lowerRight(rect);
    std::cout << "Lower right point: (" << p.x << ", " << p.y << ")" << std::endl;
    return 0;
}
