#include <algorithm>
#include <iostream>
#include <vector>

void c3e03() {
    std::cout << "Words: ";

    std::vector<std::string> words;
    std::string word;
    while (std::cin >> word) {
        words.push_back(word);
    }

    std::vector<std::string>::size_type size = words.size();

    if (size < 2) {
        std::cerr << "Need more input!" << std::endl;
        return;
    }

    sort(words.begin(), words.end());

    unsigned int count = 1;
    unsigned int curidx = 0;
    for (unsigned int i = 1; i < size; ++i) {
        word = words[i];

        if (words[i] == words[curidx]) {
            ++count;
        } else {
            std::cout << words[curidx] << ": " << count << std::endl;
            count = 1;
            curidx = i;
        }
    }

    std::cout << words[curidx] << ": " << count << std::endl;
}
