#include "Bitcoin.hpp"

/* input.txt deki tarihi data.csv de bulur ve input.txt'deki bitcoin sayısını data.csvdeki
o tarihteki değer ile çarpar. Eğer O tarih yoksa ondan önceki en yakın tarih için aynısını yapar. */

int main(int argc, char **argv)
{
    //arg check
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}

	//data.csv file check
	std::ifstream bitcoin_file("data.csv");
	if (!bitcoin_file.is_open())
	{
		std::cerr << "Couldn't read Bitcoin file" << std::endl;
		return (1);
	}

	//second arg check for example -> .csvx
	if (strcmp(argv[1], "input.txt") != 0)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	//input.txt file check
	std::ifstream filename("input.txt");

	std::list<std::string> mylist;
	std::string line;
	while (std::getline(bitcoin_file, line))
		mylist.push_back(line);

	print_list(mylist);

	while (std::getline(bitcoin_file, line))
		check_list(line);


	bitcoin_file.close();
	filename.close();
	return (0);
}

void	check_list(std::string line)
{
	std::list<std::string> mylist2;
	std::list<std::string>::iterator iterator = mylist2.begin();

	int i = 0;
	while (line[i])
	{
		//line[i] -> char char kontrol.
		if (line[i] == ',' || line[i] == '-')
			i++;
		else if ((line[i] >= '0' && line[i] <= '9'))
		{
			mylist2.push_back(line);
		}
		i++;
	}
	
	while (iterator != mylist2.end())
	{
		std::cout << "Iterator2:" << *iterator << std::endl;
		++iterator;
	}

	return ;
}

void	print_list(std::list<std::string> &list)
{
	std::list<std::string>::iterator myiterator;
	myiterator = list.begin();
	while (myiterator != list.end())
	{
		std::cout << *myiterator << std::endl;
		++myiterator;
	}
}
