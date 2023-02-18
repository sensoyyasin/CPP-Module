/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:24:56 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/18 09:24:57 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
    size_t  size;
    T       *arr;
    
    Array() : size(0)
    {
        arr = new T();
    }

    Array(unsigned int n) : size(n)
    {
        arr = new T[n];
    }

    Array(const Array &copy) : size(copy.Size())
    {
        this->arr = new T[this->size];
        for (size_t i = 0; i <= size; i++)
        {
            this->arr[i] = copy.arr[i];
        }
    }

    Array &operator=(const Array& copy)
    {
        if (this != &copy)
        {
            delete this->arr;
            this->arr = new T[copy.Size()];
            this->size = copy.size;
            for (size_t i = 0; i < this->size; i++)
            {
                this->arr[i] = copy.arr[i];
            }
        }
        return (*this);
    }

    //Operator overload.
    T &operator[](size_t index)
    {
        //std::cout << "this->size: " << this->size << std::endl;
        std::cout << " index: " << index << std::endl;
        if (index > this->size || index < 0)
            throw(Array::OutOfBound());
        return(arr[index]);
    }
    
    size_t  Size(void) const
    {
        return (size);
    }

    class OutOfBound : public std::exception
    {
        public:
            const char *what() const _NOEXCEPT
            {
                return ("Bad index!");
            }
    };
};

#endif