#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
//container Adapter : stack : list-in-first-out
class MutantStack : public std::stack<T>
{
    public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const & src) : std::stack<T>(src) {}
    virtual ~MutantStack() {}

    // Typedef for convenience: iterator for the underlying deque
    typedef typename std::deque<T>::iterator iterator;

    // Function to get the beginning iterator of the stack
    iterator begin(){
        return this->c.begin();}

    // Function to get the end iterator of the stack
    iterator end(){
        return this->c.end();}
};

#endif 
