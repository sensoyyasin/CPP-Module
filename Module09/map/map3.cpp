#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, int> m;

	m["first"] = 1;
	m["second"] = 2;
	m["third"] = 3;

	std::map<std::string, int>::iterator it;
	it = m.begin();
	while (it != m.end())
	{
		std::cout << it->first << std::endl;
		++it;
	}
	// if (m.count("third") > 0)
	// 	std::cout << "Key four is in the map" << std::endl;
	// else
	// 	std::cout << "Key four is not in the map" << std::endl;
	return (0);
}