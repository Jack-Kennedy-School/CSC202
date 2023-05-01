#include <iostream>

void modify(const int& value) {
    int& ref = const_cast<int&>(value);
    ref = 42;
}

int main() {
    int x = 0;
    modify(x);
    std::cout << x << std::endl;  // Output: 42
    return 0;
}
