#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}

int main() {
    double x1 = 1.0;
    double y1 = 2.0;
    double x2 = 4.0;
    double y2 = 6.0;

    double dist = distance(x1, y1, x2, y2);
    std::cout << "Distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << dist << std::endl;

    return 0;
}
