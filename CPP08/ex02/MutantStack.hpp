/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:58:54 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/21 18:58:56 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack<T>(){};
    ~MutantStack<T>(){};

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator    begin(){ return (this->c.begin());}
    iterator    end(){ return(this->c.end());}
};


#endif