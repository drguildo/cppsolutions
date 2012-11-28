#include <iostream>

void c2e08() {
    int product = 1;

    for (int i = 1; i < 10; ++i) {
        product *= i;

        std::cout << i;

        if (i == 9)
            std::cout << " = ";
        else
            std::cout << " * ";
    }

    std::cout << product << std::endl;
}
