#include <iostream>
#include <vector>

void c3e05() {
    std::vector<std::string> names;
    std::vector<double> grades;

    for (;;) {
        std::cout << "Name: ";

        std::string name;
        std::cin >> name;
        if (name.size() == 0) {
            for (unsigned int i = 0; i < names.size(); i++) {
                std::cout << names[i] << ": " << grades[i] << std::endl;
            }
            return;
        }
        names.push_back(name);

        std::cout << "Midterm and final exam grades: ";
        double midterm, final;
        std::cin >> midterm >> final;

        std::cout << "Homework grades: ";
        double first, second, third;
        std::cin >> first >> second >> third;

        grades.push_back(0.2 * midterm + 0.4 * final + 0.4 * (first + second + third) / 3);
    }
}
