#include "BitcoinExchange.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <stdexcept>
#include <fstream>
#include <cctype>


BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        dataBase = other.dataBase;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}


std::string BitcoinExchange::trim(const std::string& str) {
    std::string::size_type first = 0;
    while (first < str.length() && std::isspace(str[first])) 
        ++first;
    
    std::string::size_type last = str.length() - 1;                                                        
    while (last > 0 && std::isspace(str[last])) 
        --last;
    
    if (last >= first) 
        return str.substr(first, last - first + 1);
    else 
        return "";
}

float ft_stof(const std::string& str)
{ 
    float num;
    std::stringstream ss(str);                                                                                     
    ss >> num;
    return num;
}

bool BitcoinExchange::isValidDateFormat(const std::string& date) {
    if(date.empty())
     {
        std::cerr << "Error:empty!" << std::endl;
        return false;
    }
    if (date.length() != 10)
     {
        std::cerr << "Error: not a valid date: " << date << std::endl;                                                     
        return false;
    }

    if (date[4] != '-' || date[7] != '-')
     {
        std::cerr << "Error: not a valid date: " << date << std::endl;
        return false;
    }

    for (int i = 0; i < 10; ++i) {
        if (i == 4 || i == 7)
            continue; 
        if (!std::isdigit(date[i]))
            {
        std::cerr << "Error: not a valid date: " << date << std::endl;
        return false;
    }
    }

   
    float year = ft_stof(date.substr(0, 4));
    float month = ft_stof(date.substr(5, 2));
    float day = ft_stof(date.substr(8, 2));

	if(year < 2009 || year > 2022)
    {
         std::cerr << "Error: not a valid year: " << year << std::endl;
		return false;
    }
    if (month < 1 || month > 12)
    {
         std::cerr << "Error: not a valid month: " << month << std::endl;
        return false;
    }
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31))
    {
    std::cerr << "Error: not a valid day: " << day << std::endl;
        return false;
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
         {
    std::cerr << "Error: not a valid day: " << day << std::endl;
        return false;
    }
    else if (month == 2) {
       
        bool isLeapYear = static_cast<int>(year) % 4 == 0 ;

        if (isLeapYear && (day < 1 || day > 29)) {
            std::cerr << "Error: not a valid day: " << day << " for February in a leap year" << std::endl;
            return false;
        } else if (!isLeapYear && (day < 1 || day > 28)) {
            std::cerr << "Error: not a valid day: " << day << std::endl;
            return false;
        }
    }
    return true;

}



bool BitcoinExchange::isvalidvalue(const std::string &value) {
    if (value.empty()) {
        std::cerr << "Error: empty value!" << std::endl;
        return false;
    }

    size_t i = 0;
    bool isvalid = false;
    int flag = 0;

    if (!std::isdigit(value[i])) {
        std::cerr << "Error: not a valid number: " << value << std::endl;
        return false;
    }

    for (; i < value.size(); i++) {
        if (std::isdigit(value[i])) 
            isvalid = true;
        else if (value[i] == '.' && flag == 0) 
            flag++;
        else {
            std::cerr << "Error: not a valid number: " << value << std::endl;                                                  
            return false;
        }
    }

    if (!isvalid || (value.find('.') != std::string::npos && !std::isdigit(value.back()))) {
        std::cerr << "Error: not a valid number: " << value << std::endl;
        return false;
    }
    if (ft_stof(value) < 0) {
        std::cerr << "Error: not a positive number: " << value << std::endl;
        return false;
    } else if (ft_stof(value) > 1000) {
        std::cerr << "Error: too large a number: " << value << std::endl;
        return false;
    }

    return true;
}

float BitcoinExchange::rateindatafile(const std::string &date)//The result is either the exchange rate for the exact date or the nearest available date.
{
                             
    if (this->dataBase.count(date) > 0)
        return this->dataBase.at(date);
    return (--this->dataBase.lower_bound(date))->second;
}


void BitcoinExchange::dateinfiledata(std::ifstream& filedata) //  The date is the key, and the exchange rate is the value.
{
    std::string line;
    size_t delim;

    std::getline(filedata, line);
    while (std::getline(filedata, line))                                                      
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        this->dataBase[line.substr(0, delim)] = ft_stof(rate);
    }
    filedata.close();
}

void BitcoinExchange::parse(const std::string &namefile)
{
        std::ifstream file(namefile);
        if (!file.is_open())
            throw ("ERROR: Unable to open file!");
        if (file.peek() == EOF)
            throw ("FILEDATA IS EMPTY!");

	    std::ifstream filedata("data.csv", std::ifstream::in);
	    if (!filedata.is_open())
		    throw ("ERROR: Unable to open filedata!");
         if (filedata.peek() == EOF)
            throw ("FILE IS EMPTY!");
    
		dateinfiledata(filedata);

        std::string line;
        std::getline(file, line);
        if (line != "date | value")
            throw("INVALID FILE FORMAT!");
         
        while (std::getline(file, line))
        {
            size_t pipe = line.find('|');
            if (pipe == std::string::npos)
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }

            std::string date = trim(line.substr(0, pipe));
            std::string value = trim(line.substr(pipe + 1));

            if (!isValidDateFormat(date))
                continue;

            if (!isvalidvalue(value))
                continue;

            float rate = ft_stof(value);
            std::cout << date << " => " << value << " = " << std::setprecision(2) << rate * rateindatafile(date) << std::endl; 
        }
        file.close();
		filedata.close();
}


