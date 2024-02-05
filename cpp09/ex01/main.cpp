#include "RPN.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " \"RPN expression\"" << std::endl;   
        return 1;
    }

    try {
        double result = evaluateRPN(argv[1]);
        std::cout << result << std::endl;
    } catch (const char *err) {
        std::cerr << err << std::endl;
        return 1;
    }

    return 0;
}
