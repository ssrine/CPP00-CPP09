
#include <iostream>
#include "Span.hpp"

int main() {
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Adding many numbers in one call
        // int arr[] = { 2,3,4,55,6,7,7,4} ;
        // std::vector<int> range (arr, arr + sizeof(arr) / sizeof(arr[0]));
        std::vector<int> range;
        for (int i = 1; i <= 4; ++i) {
            range.push_back(i);
        }
        sp.addNumbers(range);
        std::cout << "Shortest Span after adding many numbers: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span after adding many numbers: " << sp.longestSpan() << std::endl;

    } catch (char const *err) {
        std::cerr << err << std::endl;
    }

    return 0;
}
