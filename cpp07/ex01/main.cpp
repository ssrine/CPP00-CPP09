#include <iostream>
#include "iter.hpp"

template <typename T>
void printElement( T& element) {
    std::cout << element << " ";
}

int main() {
    //integer array
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(int);

    std::cout << "Applying iter to intArray: ";
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    //  double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArraySize = sizeof(doubleArray) / sizeof(double);

    std::cout << "Applying iter to doubleArray: ";
    iter(doubleArray, doubleArraySize, printElement<double>);
    std::cout << std::endl;

    //  string array
    std::string stringArray[] = {"one", "two", "three", "four", "five"};
    size_t stringArraySize = sizeof(stringArray) / sizeof(std::string);

    std::cout << "Applying iter to stringArray: ";
    iter(stringArray, stringArraySize, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
