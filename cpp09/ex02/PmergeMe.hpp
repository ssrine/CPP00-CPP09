#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <ctime>

const double MICROSECOND = 1000000.0;

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& to_copy);
    PmergeMe &operator=(const PmergeMe& to_copy);
    ~PmergeMe();

    void sortSequence(const std::vector<unsigned int>& sequence);
};


#endif
