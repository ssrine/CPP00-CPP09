#include <iostream>
#include "Array.hpp"

int main() {
    // Array with integers
    Array<int> intArray(5);

    for (size_t i = 0; i < intArray.size(); ++i) {
        intArray[i] = i + 1;
    }

    std::cout << "Size of intArray: " << intArray.size() << std::endl;
    std::cout << "Elements of intArray: ";
    for (size_t i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    //Array with doubles
    Array<double> doubleArray(3);

    for (size_t i = 0; i < doubleArray.size(); ++i) {
        doubleArray[i] = 1.1 * (i + 1);
    }

    std::cout << "Size of doubleArray: " << doubleArray.size() << std::endl;
    std::cout << "Elements of doubleArray: ";
    for (size_t i = 0; i < doubleArray.size(); ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    //  Array with strings
    Array<std::string> stringArray(4);

    for (size_t i = 0; i < stringArray.size(); ++i) {
        stringArray[i] = "Element" + std::to_string(i + 1);
    }

    std::cout << "Size of stringArray: " << stringArray.size() << std::endl;
    std::cout << "Elements of stringArray: ";
    for (size_t i = 0; i < stringArray.size(); ++i) {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
