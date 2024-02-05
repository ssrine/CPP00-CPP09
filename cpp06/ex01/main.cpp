#include <iostream>

#include "Serializer.hpp"

int main() {
    Data originalData;
    originalData.n = 42;

    uintptr_t serializedData = Serializer::serialize(&originalData);

    Data* restoredData = Serializer::deserialize(serializedData);

   
    if (restoredData == &originalData) {
        std::cout << "Case 1: Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Case 1: Serialization and deserialization failed!" << std::endl;
    }

    
    Data anotherData;
    anotherData.name = "aweeeli";

    uintptr_t serializedAnotherData = Serializer::serialize(&anotherData);

    Data* restoredAnotherData = Serializer::deserialize(serializedAnotherData);

    if (restoredAnotherData == &anotherData) {
        std::cout << "Case 2: Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Case 2: Serialization and deserialization failed!" << std::endl;
    }

    Data* nullData = NULL;

  
    uintptr_t serializedNullData = Serializer::serialize(nullData);

    Data* restoredNullData = Serializer::deserialize(serializedNullData);

    if (restoredNullData == NULL) {
        std::cout << "Case 3: Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Case 3: Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
