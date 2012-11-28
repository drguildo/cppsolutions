#include <iostream>

void c2e09() {
    std::cout << "First number: ";

    int x;
    std::cin >> x;

    std::cout << "Second number: ";

    int y;
    std::cin >> y;

    if (x > y)
        std::cout << x << " is larger.";
    else
        std::cout << y << " is larger.";
}
