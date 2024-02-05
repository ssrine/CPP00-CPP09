/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:36:06 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 22:01:52 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <functional>

class Harl {
private:
    void debug();
    void info();
    void warning();
    void error();

public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif 
