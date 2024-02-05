#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::Intern(Intern const & src)
{
    *this = src;
    return ;
}

Intern::~Intern()
{
    return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
    if (this != &rhs)
    {}
    return *this;
}

Form *makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form *makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const& formName, std::string target)
{
    typedef Form *(*funcPtr)(std::string target);
    std::string formNameArray[3] = {"shrubbery", "robotomy", "presidential"};                
    funcPtr funcArray[3] = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNameArray[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (funcArray[i])(target);
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    return NULL;
}