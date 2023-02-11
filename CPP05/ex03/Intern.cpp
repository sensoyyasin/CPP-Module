#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &copy)
{
    (void)copy;
}

Intern &Intern::operator=(Intern const &src)
{
    (void)src;
    return (*this);
}

Intern::~Intern(){}

const char *Intern::Form404::what() const _NOEXCEPT
{
    return ("Form Not Found[404]");
}

int fx(std::string arg)
{
    std::string str[3] = {"presidentialpardon", "robotomyrequest", "shrubberycreation"};
    
    int i = 0;
    while (i < 3)
    {
        if (str[i] == arg)
            return (i);
        i++;
    }
    return (-1);
}

Form *Intern::makeForm(std::string name, std::string largest)
{
    switch (fx(name))
    {
        case 0:
            forms[0] = new PresidentialPardonForm();
            std::cout << "Intern creates " + largest << std::endl;
            return (forms[0]);
        case 1:
            forms[1] = new RobotomyRequestForm();
            std::cout <<  "Intern creates " + largest << std::endl;
            return (forms[1]);
        case 2:
            forms[2] = new ShrubberyCreationForm();
            std::cout << "Intern creates " + largest << std::endl;
            return (forms[2]);
        default:
            throw Intern::Form404();
    }
    return(0);
}