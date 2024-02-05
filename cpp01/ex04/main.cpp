/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:26:14 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 19:03:33 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "stringreplacer.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    Replace replacer(filename);
    int result = replacer.changeMethod(s1, s2);

    if (result != 0) {
        std::cerr << "Error occurred while processing the file" << std::endl;
        return result;
    }

    return 0;
}
