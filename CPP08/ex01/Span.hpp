/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:26:20 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/21 15:26:21 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int size;
    std::vector<int> vec;
public:
    Span();
    Span(unsigned int N);
    Span &operator=(const Span &copy);
    ~Span();

    void addNumber(int number);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

    std::vector<int> &getVector();

    class OutOfRange : public std::exception
    {
        const char *what() const throw();
    };

    class NumberRange : public std::exception
    {
        const char *what() const throw();
    };
};



#endif