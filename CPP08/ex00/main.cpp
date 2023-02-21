/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:26:28 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/21 15:50:33 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int arr[] = {10,20,30};
    std::vector<int> v(arr, arr + 3);

    std::cout << "1st elements of the array: "; easyFinder(v, 10);
    std::cout << "2nd elements of the array: "; easyFinder(v, 20);
    std::cout << "3rd elements of the array: "; easyFinder(v, 30);
    std::cout << "4th elements of the array: "; easyFinder(v, 40);

    // std::list<int> myList;
    
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // std::cout << "1st elements of the array: "; easyFinder(myList, 10);
    // std::cout << "2nd elements of the array: "; easyFinder(myList, 20);
    // std::cout << "3rd elements of the array: "; easyFinder(myList, 30);


    return (0);
}