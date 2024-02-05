/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringreplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:16:22 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 19:08:10 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGREPLACER_HPP
#define STRINGREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace {
private:
    std::string _ifilename;
    std::string _ofilename;

public:
    Replace(std::string filename);
    ~Replace();
    int changeMethod(std::string s1, std::string s2);
};

#endif 