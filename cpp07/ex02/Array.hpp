#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef> 
#include <stdexcept> 

template <typename T>
class Array {
private:
    T* elements;
    size_t arraySize;

public:
    // Default constructor: creates an empty array
    Array() : elements(NULL), arraySize(0) {}

    Array(size_t n) : arraySize(n) {
        elements = new T[arraySize]();
    }

    // Copy constructor
    Array(const Array& other) : arraySize(other.arraySize) {
        elements = new T[arraySize];
        for (size_t i = 0; i < arraySize; ++i) {
            elements[i] = other.elements[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] elements;

            arraySize = other.arraySize;
            elements = new T[arraySize];

            for (size_t i = 0; i < arraySize; ++i) {
                elements[i] = other.elements[i];
            }
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] elements;
    }

    // Subscript operator for element access
    T& operator[](size_t index) const{
        if (index >= arraySize) {
            throw std::out_of_range("Index out of bounds");
        }
        return elements[index];
    }

    
    size_t size() const {
        return arraySize;
    }
};

#endif
