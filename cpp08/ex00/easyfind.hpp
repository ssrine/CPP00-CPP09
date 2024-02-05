
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int  easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end()) 
        return *it;
     else 
        throw ("Value not found in container");
}

#endif 