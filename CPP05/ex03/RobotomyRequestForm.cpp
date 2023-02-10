#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form("RobotomyRequestForm", 72, 45)
{
    this->setName(name);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getsignGrade(), src.getexecuteGrade())
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm src)
{
    this->setName(src.getName());
    this->setIndicate(src.getIndicate());
    return (*this);
}

void RobotomyRequestForm::executeForm() const
{
    int i = 0;
    //what do you want this is just an example
    while (i <= 2)
    {
        if (i % 2 == 0 && this->getsignGrade() == 72 && this->getexecuteGrade() == 45)
        {
            std::cout << "Whirr Whirr." << std::endl;
            std::cout << this->getName() << "has been robotomized successfully 50% of the time" << std::endl;
        }
        else
            std::cout << this->getName() << " robotomy failed." << std::endl;
        i++;
    }
}