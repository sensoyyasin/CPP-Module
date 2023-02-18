/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:25:06 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/18 09:25:07 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int length, void(*print_func)(T &))
{
    int i = 0;
    while (i < length)
    {
        print_func(array[i]);
        i++;
    }
}

template <typename T>
void print_func(T &str)
{
    std::cout << str << std::endl;
}

#endif