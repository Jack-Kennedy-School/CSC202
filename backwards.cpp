#include <iostream>
#include <string>

void printBackwards(const std::string& str) {
  for (int i = str.length() - 1; i >= 0; --i) {
    std::cout << str[i];
  }
  std::cout << std::endl;
}

int main() {
  std::string inputStr = "hello world";
  printBackwards(inputStr);
  return 0;
}
