#include "RPN.hpp"
#include <stack>
#include <sstream>
#include <cmath>

#include <iostream>
#include <sstream>
#include <stack>
#include <cmath>

double ft_stod(const std::string& str)
{ 
    double num;
    std::stringstream ss(str);                                                                 
    ss >> num;
    return num;
}

double evaluateRPN(const std::string& expression) {
    std::stack<double> stack;
    int i = 0;
   
 while (std::isspace(expression[i]))
        ++i;
 
    if(expression.empty()|| expression[i] == '\0' )
        throw("empty arg");
    std::istringstream iss(expression);                         

    std::string token ;
    while (iss >> token ) {
        try {
            if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
                double push = ft_stod(token);
                if (push < 10)
                    stack.push(push);
                else
                    throw "Number must be less than 10";
            } else {
                if (token != "+" && token != "-" && token != "*" && token != "/") 
                    throw "Invalid operator " ;

                if (stack.size() < 2) 
                    throw "Not enough operands for the operator ";

                double operand2 = stack.top();
                stack.pop();

                double operand1 = stack.top();
                stack.pop();
              
                if (token == "+" ) 
                    stack.push(operand1 + operand2);
                else if (token == "-" ) 
                    stack.push(operand1 - operand2);
                else if (token == "*" ) 
                    stack.push(operand1 * operand2);
                else if (token == "/" ) {
                    if (operand2 == 0) 
                        throw "Division by zero";
                    stack.push(operand1 / operand2);
                }
            }
        } catch (const char* err) {
            std::cerr << "Error: " << err << std::endl;
            exit(1);
        }
   }
    if (stack.size() != 1) 
        throw "Error: Invalid RPN expression";
    
    return stack.top();
}

