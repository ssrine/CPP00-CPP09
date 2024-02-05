#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <unordered_map>
#include <map>  

class BitcoinExchange
{
private:
    std::map<std::string, float> dataBase;
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &copy);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    
    std::string trim(const std::string &str);
    bool isvalidvalue(const std::string &value);
    bool isValidDateFormat(const std::string &date);
    void dateinfiledata(std::ifstream& internal_db);
    float rateindatafile(const std::string &date);
    void parse(const std::string &namefile);

};

#endif