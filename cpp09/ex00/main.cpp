#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        try{
             BitcoinExchange exchange;
            exchange.parse(av[1]);
        }catch (const char *err)
        {
            std::cerr << err << std::endl;
            return(1);
        }
    }
    else
    {
        std::cout << "Error: could not open file." << std::endl;
        return(1);
    }


}