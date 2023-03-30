#ifndef BITCOIN_HPP
# define BITCOIN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>

class Bitcoin
{
public:
	Bitcoin();
	~Bitcoin();

	//std::list<std::string> mylist;
};

void	print_list(std::list<std::string> &list);
void	check_list(std::string line);

#endif

