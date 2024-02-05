#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <deque>

PmergeMe::PmergeMe() {
    
}

PmergeMe::~PmergeMe() {
    
}

PmergeMe::PmergeMe(const PmergeMe& to_copy) {
    *this = to_copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& to_copy) {
	(void)to_copy;
	return *this;
}

template <typename Container>
Container mergelist(Container& left, Container& right) {
    Container result;

    typename Container::iterator leftIt = left.begin();
    typename Container::iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt <= *rightIt) {
            result.push_back(*leftIt);
            ++leftIt;
        } else {
            result.push_back(*rightIt);
            ++rightIt;
        }
    }

    while (leftIt != left.end()) {
        result.push_back(*leftIt);
        ++leftIt;
    }

  
    while (rightIt != right.end()) {
        result.push_back(*rightIt);
        ++rightIt;
    }

    return result;
}


template <typename Container>
void mergeInsertSort(Container& container) {
    for (size_t i = 1; i < container.size(); ++i) {
        size_t j = i;
        typename Container::value_type current = container[i];

        while (j > 0 && container[j - 1] > current) {
            container[j] = container[j - 1];
            --j;
        }

        container[j] = current;
    }
}

template <typename Container>
void mergeSort(Container& container) {

    if (container.size() <= 1)
        return;


    size_t mid = container.size() / 2;

   
    Container left(container.begin(), container.begin() + mid);
    Container right(container.begin() + mid, container.end());

    
   mergeInsertSort(left);
    mergeInsertSort(right);

    container = mergelist(left, right);
}

void PmergeMe::sortSequence(const std::vector<unsigned int>& sequence) {
    if (sequence.size() <= 1)
        return;

    std::vector<unsigned int> vecContainer(sequence);
    std::deque<unsigned int> dequeContainer(sequence.begin(), sequence.end());


   
    std::cout << "<vec>Before: ";
    std::copy(sequence.begin(), sequence.end(), std::ostream_iterator<unsigned int>(std::cout, " "));
    std::cout << std::endl;
    std::cout << std::endl;
    mergeSort(vecContainer);
    std::cout << "<vec>After: ";
    std::copy(vecContainer.begin(), vecContainer.end(), std::ostream_iterator<unsigned int>(std::cout, " "));
    std::cout << std::endl;
    std::clock_t start = std::clock();
     std::cout << std::endl;
    double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
    std::cout << "Time to process a range of " << vecContainer.size()
              << " elements with std::vector<unsigned int> : " << time_taken << " µs" << std::endl;

    std::cout << std::endl;

  
    std::cout << "<deque>Before: ";
    std::copy(sequence.begin(), sequence.end(), std::ostream_iterator<unsigned int>(std::cout, " "));
    std::cout << std::endl;
    mergeSort(dequeContainer);

    std::cout << "<deque>After: ";
    std::copy( dequeContainer.begin(),  dequeContainer.end(), std::ostream_iterator<unsigned int>(std::cout, " "));
    start = std::clock();
     std::cout << std::endl;
    time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
    std::cout << "Time to process a range of " <<  dequeContainer.size()
              << " elements with std::deque<unsigned int> : " << time_taken << " µs" << std::endl;
    std::cout << std::endl;
}