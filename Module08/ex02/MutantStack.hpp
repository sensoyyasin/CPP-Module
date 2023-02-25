/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:58:54 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/22 17:16:10 by ysensoy          ###   ########.fr       */
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
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};
    MutantStack &operator=(const MutantStack& copy)
    {
        this->c = copy->c;
        return(*this);
    }
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator    begin(){ return (this->c.begin());}
    iterator    end(){ return(this->c.end());}
};


#endif