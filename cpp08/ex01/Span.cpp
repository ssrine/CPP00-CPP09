
#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        N = copy.N;
        numbers = copy.numbers;
    }
    return (*this);
}

void Span::addNumber(int number) {
    if (numbers.size() >= N) {
        throw ("Cannot add more numbers, the Span is full");
    }
    numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (numbers.size() <= 1) {
        throw ("Cannot find span with less than two numbers");
    }

    // Create a copy of the numbers vector and sort it in ascending order
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    // Initialize minSpan with the difference between the first two sorted numbers
    int minSpan = sortedNumbers[1] - sortedNumbers[0];

    // Iterate through the sorted numbers, finding the minimum span
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    // Return the calculated minimum span
    return minSpan;
}


int Span::longestSpan() const {
    if (numbers.size() <= 1) {
        throw ("Cannot find span with less than two numbers");
    }

    // Create a copy of the numbers vector and sort it in ascending order
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());// iterator 

    // Return the difference between the last and first sorted numbers
    return (sortedNumbers.back() - sortedNumbers.front());//reference value 
}



void Span::addNumbers(const std::vector<int>& range) {
    if (numbers.size() + range.size() > N) {
        throw ("Cannot add more numbers, the Span is full");
    }
    for (size_t i = 0; i < range.size(); ++i) {
        addNumber(range[i]);
    }
}


