#include <iostream>
#include <vector>

void c3e04() {
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

    unsigned int shortidx = 0;
    unsigned int longidx = 0;
    for (unsigned int i = 1; i < size; ++i) {
        if (words[i].size() < words[shortidx].size())
            shortidx = i;
        if (words[i].size() > words[longidx].size())
            longidx = i;
    }

    std::cout << "Longest: " << words[longidx] << std::endl;
    std::cout << "Shortest: " << words[shortidx] << std::endl;
}
