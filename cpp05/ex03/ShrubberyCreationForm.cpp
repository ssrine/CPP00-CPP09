/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:08:47 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:49:58 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("Shrubbery Creation Form", 145, 137), target("default"){
        std::cout << "Shrubbery Creation Form is created" << std::endl;

}
    
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("Shrubbery Creation Form", 145, 137), target(target){
            std::cout << "Shrubbery Creation Form is created" << std::endl;

    }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& to_copy)
    : Form(to_copy) {
            std::cout << "Shrubbery Creation Form is copied" << std::endl;

    }

ShrubberyCreationForm::~ShrubberyCreationForm() {
        std::cout << "Shrubbery Creation Form is destroyed" << std::endl;

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original) {   
     std::cout << "Shrubbery Creation Form is assigned" << std::endl;
    if (this != &original) {
        Form::operator=(original);
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (getSigned() == true && executor.getGrade() <= getGradeExec()) {
        std::ofstream file(target + "_shrubbery");

        if (file.is_open()) {
            file << "              _{\\ _{\\{\\/}/}/}__\n";
            file << "             {/{/\\}{/{/\\}(\\}{/{/\\} _\n";
            file << "            {/{/\\}{/{/\\}(_){}{/{/\\}  _\n";
            file << "         {\\{/\\(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
            file << "        {/{/(_)/}{\\{/\\)\\}{\\(_){/}/}/}/}\n";
            file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}/}\n";
            file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
            file << "      _{\\{/{\\{/(_){}/}{/{/{/\\}\\})\\}{/\\}\n";
            file << "     {/{/{\\{\\(/}{/{\\{\\/})/}{\\(_)/}/}\\}\n";
            file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
            file << "       {/{\\{\\/}{/{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
            file << "      {/{\\{\\/}{/){\\{\\/}/}{\\{\\(/}/}\\}/}\n";
            file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
            file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
            file << "          (_){/{\\/}{\\{\\/}/}{\\}(_){\\/}\n";
            file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
            file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n";
            file << "              {){/ {\\/}{\\/} \\}\\}\n";
            file << "              (_)  \\.-'.-/\n";
            file << "          __...--- |-'.-'| --...__\n";
            file << "   _...--\"   .-'   |-'.-'|  ' -.  \"\"--..\n";
            file << " -\"    ' .  . '    |.'-._| '  . .  '   jro\n";
            file << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
            file << "          ' ..     |'-_.-|\n";
            file << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
            file << "              .'   |'- .-|   '.\n";
            file << "  ..-'   ' .  '.   `-._.-�   .'  '  - .\n";
            file << "   .-' '        '-._______.-'     '  .\n";
            file << "        .      ~,\n";
            file << "    .       .   |\\   .    ' '-.\n";
            file.close();
            
            std::cout << "Shrubbery creation successful. Check the file: " << target + "_shrubbery" << std::endl;
        } else {
            std::cerr << "Failed to open file for shrubbery creation." << std::endl;
        }
    } else {
        std::cerr << "Execution failed. Form not signed or grade too low." << std::endl;
    }
}

