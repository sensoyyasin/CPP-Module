/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:24:44 by ysensoy           #+#    #+#             */
/*   Updated: 2023/03/31 17:35:19 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    this->token_counter = 0;
}

RPN::RPN(const RPN& copy)
{
    (void)copy;
}

// RPN RPN::operator= (const RPN& other)
// {
//     *this = other;
//     return (*this);
// }

RPN::~RPN() {}

void    RPN::checker(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Arg error" << std::endl;
        exit(1);
    }

    int i = 1;
    int j = 0;

    while(argv[i])
    {
        j = 0;
        while(argv[i][j])
       {
            if (argv[i][j] == '/' || argv[i][j] == '+' || argv[i][j] == '*' || argv[i][j] == '-')
            {
                this->token_counter++;
                this->real_token = argv[i][j];
            }
            j++;
       } 
       i++;
    }

    if (this->token_counter == 0)
    {
        std::cerr << "There is no Operator" << std::endl;
        exit(1);
    }
}