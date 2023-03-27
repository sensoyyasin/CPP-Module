#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> map;

	map["first"] = 1;
	map["second"] = 2;
	map["third"] = 3;

	std::map<std::string, int>::iterator it = map.begin();
	//map has -> first, second and swap.

	//print an each element of array...
	while (it != map.end())
	{
		std::cout << "Each element of map : " << it->first << std::endl;
		++it;
	}
	std::cout << "Size of map : "<< map.size() << std::endl;
	return(0);
}