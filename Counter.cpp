#include <string>

int count_letters(const std::string& str, char letter) {
    int count = 0;
    for (char c : str) {
        if (c == letter) {
            count++;
        }
    }
    return count;
}
