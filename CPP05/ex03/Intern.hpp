#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Form *forms[3];
    Intern();
    ~Intern();

    Form *makeForm(std::string name, std::string largest);
    Intern &operator=(Intern const &src);
    Intern(Intern const &copy);

    class Form404 : public std::exception
    {
        public:
            const char *what() const _NOEXCEPT;
    };
};

#endif