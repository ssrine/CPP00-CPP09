#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("Unknown") {
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name) {
    std::cout << "WrongAnimal parameterized constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongAnimal copy assignment operator" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some generic wrong animal sound" << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return type;
}
