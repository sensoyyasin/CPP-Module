#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

void    Add(PhoneBook *str)
{
    if (str->sayac >= 7)
        str->sayac = 7;
    std::cout << "\033[1;92mPerson Informations\033[0m" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, str->people[str->sayac].name);
    std::cout << "Surname: ";
    std::getline(std::cin, str->people[str->sayac].surName);
    std::cout << "Nickname: ";
    std::getline(std::cin, str->people[str->sayac].nickName);
    std::cout << "Tel Number: ";
    std::getline(std::cin, str->people[str->sayac].telNumber);
    std::cout << "Secret: ";
    std::getline(std::cin, str->people[str->sayac].secret);
    if (str->people[str->sayac].name.empty() || str->people[str->sayac].surName.empty() || str->people[str->sayac].nickName.empty())
        return ;
    str->sayac++;
}

void    Search(PhoneBook *str)
    {
        int i = 0;
        int controller;
        std::string separator = "+-----------------------------------------------+\n";
        std::string filler;
        Contact p2;

        if (std::cin.eof() == 1)
            exit(0);
        if (!str->sayac)
        {
            std::cout << "\033[1;91mThere is no person\033[0m" << std::endl;
            return ;
        }
        std::cout << "\033[1;92mWelcome to My List\033[0m" << std::endl;

        while (str->sayac > i)
        {
            std::cout << separator
            << "| " << std::right << std::setw(10) << i
            << "| " << std::right << std::setw(10) << (str->people[i].name.length() > 10 ? str->people[i].name.substr(0,9) + '.' : str->people[i].name)
            << "| " << std::right << std::setw(10) << (str->people[i].surName.length() > 10 ? str->people[i].surName.substr(0,9) + '.' : str->people[i].surName)
            << "| " << std::right << std::setw(10) << (str->people[i].nickName.length() > 10 ? str->people[i].nickName.substr(0,9) + '.' : str->people[i].nickName)
            << "| " << std::endl << separator;
            i++;
        }
        std::cout << "Enter person number: ";
        std::cin >> controller;
        if (controller >= 9 || controller <= 0)
        {
            std::cout << "Out of the line" << std::endl;
            return;
        }
        if (str->sayac >= i && (i <= 8 && i >= 1) && i >= controller)
        {
            std::cout << "\033[1;95mInformation -> \033[0m" << controller <<std::endl;
            std::cout << "Name: " << str->people[controller - 1].name << std::endl;
            std::cout << "SurName: " << str->people[controller - 1].surName << std::endl;
            std::cout << "Nickname: " << str->people[controller - 1].nickName << std::endl;
            std::cout << "TelNumber: " << str->people[controller - 1].telNumber << std::endl;
            std::cout << "DarkestSecret: " << str->people[controller - 1].secret << std::endl;
        }
        else
            std::cout << "We haven't been there yet" << std::endl;
    }

void    showInstruction()
{
    std::cout << "Enter your command -> ADD, SEARCH, EXIT" << std::endl;
    std::cout << "Make your choice : ";
}

int main()
{
    PhoneBook p;
    std::string str;

    p.sayac = 0;
    showInstruction();
    while (std::getline(std::cin,str))
    {
        if (str.compare("ADD") == 0)
            Add(&p);
        else if (str.compare("SEARCH") == 0)
            Search(&p);
        else if (str.compare("EXIT") == 0)
        {
            std::cout << "\033[1;91mShut Down...\033[0m" << std::endl;
            exit(0);
        }
        else if (std::cin.eof() == 1)
        {
            std::cout << "^D " << std::endl;
            exit(0);
        }
    }
    return (0);
}
