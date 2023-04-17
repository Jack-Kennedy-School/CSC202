#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age > 16 && age < 65) {
        cout << "Your age is within the normal working age." << endl;
    } else {
        cout << "Your age is not within the normal working age." << endl;
    }

    return 0;
}
