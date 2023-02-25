#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);

    //All of them take only one parameter in their constructor: the target of the form.
    //ShrubberyCreationForm(std::string name, int signGrade, int execGrade);
    
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm src);

    virtual void executeForm() const;
};

#endif