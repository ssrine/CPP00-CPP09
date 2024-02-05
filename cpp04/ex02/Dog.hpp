

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
    Brain* brain;

public:
    Dog();
    Dog(std::string name);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void makeSound() const ;
    Brain* getBrain() const;  // Add getBrain function
};

#endif

