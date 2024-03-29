#include "iter.hpp"

void printString(std::string str) {
    std::cout << str << std::endl;
}

void printFloat(float num) {
    std::cout << num << std::endl;
}

int main() {
    std::string arr1[5] = {"1", "2", "3", "4", "5"};
    iter(arr1, 5, &printString);

    std::cout << std::endl;
    float arr2[5] = {1.21, 2.21, 3.21, 4.21, 5.21};
    iter(arr2, 5, &printFloat);
}
