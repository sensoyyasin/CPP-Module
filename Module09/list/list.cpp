#include <iostream>
#include <string>
#include <list>

int main()
{
	std::list<int> mylist1, mylist2;

	for (int i = 0; i <= 10; i++)
	{
		mylist1.push_front(i);
	}


	std::list<int>::iterator it;

	it = mylist1.begin();
	while (it != mylist1.end())
	{
		std::cout << "Each element of list: " << *it << std::endl;
		++it;
	}
	return (0);
}