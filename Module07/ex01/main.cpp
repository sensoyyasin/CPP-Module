/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:25:08 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/18 09:25:08 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int foo[4] = {16, 2, 77, 40};
    iter(foo, 4, print_func);

    std::cout << "------------" << std::endl;
    
    std::string foo2[4] = {"my","brain","fucked","up"};
    iter(foo2, 4, print_func);
}