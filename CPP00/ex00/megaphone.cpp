/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:21:44 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/01/18 11:39:06 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j] != '\0')
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i++];
            if (argv[i] != NULL)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}
