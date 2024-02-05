/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringreplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:16:26 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 19:40:08 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "stringreplacer.hpp"
#include <fstream>

Replace::Replace(std::string filename)
     : _ifilename(filename), _ofilename(filename + ".replace") {}

int Replace::changeMethod(std::string s1, std::string s2) {
    // Open input file
  std::ifstream inputFile(_ifilename.c_str());

    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file '" << _ifilename << "'" << std::endl;
        return 2;
    }

    // Open output file
   std::ofstream outputFile(_ofilename.c_str());

    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open output file '" << _ofilename << "'" << std::endl;
        return 2;
    }

    // Process file line by line
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while (!s1.empty() && (pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << '\n'; 
    }

    std::cout << "File '" << _ifilename << "' has been processed. Output written to '" << _ofilename << "'" << std::endl;
    return 0;
}

Replace::~Replace(){}