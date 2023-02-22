/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:58:56 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/22 17:21:17 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "----------------" << std::endl;
    
    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Stack size: " << mstack.size() << std::endl;

    std::cout << "----------------" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(0);
    // //[...]
    mstack.push(737);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it; // it means first array an element
    --it; // it means last array an element

    while (it != ite)
    {
        std::cout << "Iterator: " << *it << std::endl;
        ++it;
    }
    std::cout << "----------------" << std::endl;

    std::stack<int> s(mstack);
    while(!s.empty())
    {
        std::cout << "Stack inside: " << s.top() << std::endl;
        s.pop();
    }

    return (0);
}