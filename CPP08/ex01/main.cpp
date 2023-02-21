/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:26:08 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/21 16:20:48 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span span(5);
        
        span.addNumber(1);
        span.addNumber(10);
        span.addNumber(42);
        span.addNumber(21);
        span.addNumber(55);
        std::cout << "minimum difference: " << span.shortestSpan() << std::endl;
        std::cout << "maximum difference: " << span.longestSpan() << std::endl;
        //span.addNumber(6);
        //span.addNumber(7);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // try
    // {
    //     std::vector<int> v(10000);
    //     std::srand(time(0));
    //     std::generate(v.begin(), v.end(), std::rand);

    //     Span span(v.size());
    //     span.addNumbers(v.begin(), v.end());

    //     unsigned long i = 0;
    //     std::vector<int> temp = span.getVector();
    //     while (i < temp.size())
    //     {
    //         std::cout << temp.at(i) << std::endl;
    //         i++;
    //     }
    //     std::cout << "minimum difference: " << span.shortestSpan() << std::endl;
    //     std::cout << "maximum difference: " << span.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    return (0);
}