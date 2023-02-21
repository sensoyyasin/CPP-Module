#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
public:
    std::string name;
    std::string surName;
    std::string nickName;
    std::string secret;
    std::string telNumber;

    //Constructor
    Contact(){};

    //Destructor
    ~Contact(){};
};

class PhoneBook
{
public:
    Contact people[8];
    int sayac;

    //Constructor
    PhoneBook(){};

    //Destructor
    ~PhoneBook(){};
};

#endif
