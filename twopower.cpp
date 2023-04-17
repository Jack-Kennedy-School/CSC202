#include <iostream>

using namespace std;

int main() {
    int power = 1;

    while (power <= 65536) { // 2^16 = 65536
        cout << power << endl;
        power *= 2; // multiply by 2 to get the next power of 2
    }

    return 0;
}
