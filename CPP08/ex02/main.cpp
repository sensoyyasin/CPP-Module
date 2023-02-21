/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:58:56 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/21 18:58:57 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Stack size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it; // it means first array an element
    --it; // it means last array an element

    while (it != ite)
    {
        std::cout << "Iterator: " << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);
    return (0);
}