#include <iostream>
#include <string>
#include <map>
#include <iterator>

int main()
{
	std::map<int, int> gquiz1;

	gquiz1.insert(std::pair<int, int>(1, 20));
	gquiz1.insert(std::pair<int, int>(2, 30));
	gquiz1.insert(std::pair<int, int>(3, 40));
	gquiz1.insert(std::pair<int, int>(4, 50));
	gquiz1.insert(std::pair<int, int>(5, 60));
	gquiz1.insert(std::pair<int, int>(6, 70));

	gquiz1[7] = 80;
	std::map<int, int>::iterator it;

	it = gquiz1.begin();
	while (it != gquiz1.end())
	{
		std::cout << it->first << std::endl;
		++it;
	}

	std::cout << "---------SECOND PART------" << std::endl;

	gquiz1.erase(5);
	std::map<int, int>::iterator it2;
	
	it2 = gquiz1.begin();

	while (it2 != gquiz1.end())
	{
		std::cout << it2->first << std::endl;
		++it2;
	}
	
	return(0);
}