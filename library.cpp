#include <iostream>
#include "library.h"


int add(int a, int b) {
    std::cout << "Adding 2 numbers" << std::endl;
    return a + b;
}

int sub(int a, int b) {
    std::cout << "Subtracting 2 numbers" << std::endl;
    return a - b;
}