#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string name);

    //All of them take only one parameter in their constructor: the target of the form.
    //RobotomyRequestForm(std::string name, int signGrade, int execGrade);

    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=(RobotomyRequestForm src);

    virtual void executeForm() const;
};

#endif