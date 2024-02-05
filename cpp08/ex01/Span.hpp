#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    unsigned int N;
    std::vector<int> numbers;

public:
    Span(unsigned int n);
    Span(const Span &copy);
    ~Span();
    Span &operator=(const Span &copy);
    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    void addNumbers(const std::vector<int>& range);
};

#endif 
