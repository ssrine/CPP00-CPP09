#include "Base.hpp"
#include <ctime>

#include <iostream>

Base* createA() { return new A; }
Base* createB() { return new B; }
Base* createC() { return new C; }

Base* generate() {
    // Array of function pointers to constructor functions
    Base* (*constructorFunctions[])() = {createA, createB, createC};
    srand(time(0));
    int random = rand() % 3;
    return constructorFunctions[random]();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) { 
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != NULL) {  
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != NULL) {  
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p) {
    try {
        static_cast<void>(dynamic_cast<A&>(p));
        std::cout << "A" << std::endl;
    } catch (...) {
        try {
            static_cast<void>(dynamic_cast<B&>(p));
            std::cout << "B" << std::endl;
        } catch (...) {
            try {
                static_cast<void>(dynamic_cast<C&>(p));
                std::cout << "C" << std::endl;
            } catch (...) {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}
int main() {
    // Case 1: Identify object of type A
    Base* objA = new A;
   
    std::cout << "pointer : A\n"; 
    identify(*objA);
    std::cout <<"reference : A\n";
    Base &refobjA = *objA;
    identify(refobjA);


    delete objA;

    // Case 2: Identify object of type B
    Base* objB = new B;
    std::cout << " \n";
     std::cout << "pointer : B-----\n"; 
    identify(objB);
     std::cout <<"reference : B------\n";
     Base &refobjB = *objB;
    identify(refobjB);
    delete objB;

    // Case 3: Identify object of type C
    Base* objC = new C;
    std::cout << " \n";
     std::cout << "pointer : B-----\n"; 
    identify(objC);
     std::cout <<"reference : B------\n";
     Base &refobjC = *objC;
    identify(refobjC);
    delete objC;

    // Case 4: Identify object of unknown type
    Base* unknownObj = generate();
    std::cout << " \n";
    std::cout << "pointer : rand-----\n"; 
    identify(unknownObj);   
    std::cout <<"reference : rand------\n";
  
    Base& ref = *unknownObj;
    identify(ref);
    delete unknownObj;

    return 0;
}
