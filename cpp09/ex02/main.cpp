#include "PmergeMe.hpp"

#include <cstdlib> 
#include <iostream>
#include <vector>



bool isUnsignedNumber(const char* str) {
    if (*str == '\0') {
        return false;
    }

    for (; *str != '\0'; ++str) {
        if (!isdigit(*str)) {
            return false;
        }
    }

    return true;
}

int main(int ac, char** av) {
    std::vector<unsigned int> inputSequence;

    for (int i = 1; i < ac; ++i) {
        if (isUnsignedNumber(av[i])) {
            inputSequence.push_back(static_cast<unsigned int>(atoi(av[i])));
        } else {
            std::cerr << "Invalid input: " << av[i] << ". Not a valid unsigned number." << std::endl;
            return 1;  
        }
    }

    PmergeMe merger;
    merger.sortSequence(inputSequence);
    return 0;
}

