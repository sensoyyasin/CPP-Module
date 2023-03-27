#include <iostream>
#include <vector>
#include <string>


int main()
{
	std::vector<int> myVector;

	for (size_t i = 0; i <= 5; i++)
	{
		myVector.push_back(i);
	}
	
	std::vector<int>::iterator it;
	it = myVector.begin();
	while (it != myVector.end())
	{
		std::cout << *it << std::endl;
		++it;
	}
	return (0);
}