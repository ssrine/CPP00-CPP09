/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:18:09 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/16 21:35:20 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        for (int j = 1; argv[j]; j++) {
            for (int i = 0; argv[j][i]; i++) {
                std::cout << (char)std::toupper(argv[j][i]);
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    return 0;
}

