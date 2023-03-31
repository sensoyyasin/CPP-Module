/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:51 by ysensoy           #+#    #+#             */
/*   Updated: 2023/03/31 16:26:16 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cerr << "Arg Error" << std::endl;
		exit(1);
	}
	BitcoinExchange bit;
	bit.rateCalculator(argv[1]);
}