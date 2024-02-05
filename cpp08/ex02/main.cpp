#include <iostream>
#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;
    mstack.push(5); 
    mstack.push(17);
    // std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    // std::cout << "Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
ite++;
ite++;
ite++;
    // while (it != ite) {
        std::cout << *ite << std::endl;
        // ++it;
    // }

    //  using std::stack
    // std::stack<int> s(mstack);

    return 0;
}
