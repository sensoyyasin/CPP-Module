#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
public:
    int token_counter;
    char    real_token;

    RPN();
	RPN(const RPN& copy);
	//RPN &operator = (const RPN& other);
    ~RPN();

    void    checker(int argc, char **argv);
};


#endif