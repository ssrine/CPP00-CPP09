#include <iostream>
#include <vector>
#include "easyfind.hpp"


int main(void)
{
    std::vector<int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    try
    {
        std::cout << easyfind(v, 3) << std::endl;
        std::cout << easyfind(v, 12) << std::endl;
    }
    catch (char const *err)
    {
        std::cout << err << std::endl;
    }
    return (0);
}