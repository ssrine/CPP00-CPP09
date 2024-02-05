#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

struct Data {
    int n;
    std::string name;
};

class Serializer {
private:
    Serializer();

public:
  // Default constructor

    // Destructor
    ~Serializer();

    // Copy constructor
    Serializer(const Serializer& other);

    // Copy assignment operator
    Serializer& operator=(const Serializer& other);


    //member function
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif