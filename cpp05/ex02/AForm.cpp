#include "AForm.hpp"

// Implementations for GradeTooLowException, GradeTooHighException, and AlreadySignedException

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

// Implementations for AForm

Form::Form()
    : name("default"), isSigned(false), gradeSign(22), gradeExec(66) {
        std::cout << "FORM Default constructor called" << std::endl;
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}
Form::Form(const std::string& name, int gradeSign, int gradeExec)
    : name(name), isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec) {
    std::cout << "FORM Constructor called" << std::endl;
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec)
{
    std::cout << "FORM Copy constructor called" << std::endl;
}

Form&   Form::operator=(const Form &copy)
{
    std::cout << "FORM Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->isSigned = copy.getSigned();
        // didn't assign other attributes because they are constant and can't be changed
    }
    return (*this);
}
Form::~Form()
{
    std::cout << "FORM Destructor called" << std::endl;
}
const std::string& Form::getName() const {
    return name;
}

bool Form::getSigned() const {
    return isSigned;
}

int Form::getGradeSign() const {
    return gradeSign;
}

int Form::getGradeExec() const {
    return gradeExec;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= gradeSign) {
        if (!isSigned) 
            isSigned = true;
    } else {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName()
       << ", Grade to Sign: " << form.getGradeSign()
       << ", Grade to Execute: " << form.getGradeExec()
       << ", Signed: " << form.getSigned();
    return os;
}



