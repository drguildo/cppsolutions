#include <iostream>
#include <vector>

void c3e02() {
    std::cout << "Integers: ";

    std::vector<int> sequence;
    int num;
    while (std::cin >> num) {
        sequence.push_back(num);
    }

    std::vector<int>::size_type size = sequence.size();

    if (size == 0 || size % 4 != 0) {
        return;
    }

    std::vector<int>::size_type quartile = size / 4;

    for (unsigned int i = 0; i < size; ++i) {
        if (i % quartile == 0)
            std::cout << std::endl;
        std::cout << sequence[i];
        if (i != size - 1)
            std::cout << " ";
    }
}
