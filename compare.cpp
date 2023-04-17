#include <iostream>

void compare(int a, int b) {
    if (a > b) {
        std::cout << a << " is greater than " << b << std::endl;
    } else if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else {
        std::cout << a << " is equal to " << b << std::endl;
    }
}

int main() {
    int x = 10;
    int y = 20;
    int z = 10;

    compare(x, y); // prints "10 is less than 20"
    compare(y, x); // prints "20 is greater than 10"
    compare(x, z); // prints "10 is equal to 10"

    return 0;
}
