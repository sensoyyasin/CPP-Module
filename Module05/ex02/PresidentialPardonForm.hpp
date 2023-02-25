#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string name);

    //All of them take only one parameter in their constructor: the target of the form.
    //PresidentialPardonForm(std::string name, int signGrade, int execGrade);

    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm &operator=(PresidentialPardonForm src);

    virtual void executeForm() const;
};

#endif