#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("PresidentialPardonForm", 25, 5)
{
    this->setName(name);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getsignGrade(), src.getexecuteGrade())
{
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm src)
{
    this->setName(src.getName());
    this->setIndicate(src.getIndicate());
    return (*this);
}

void PresidentialPardonForm::executeForm() const
{
    if (this->getsignGrade() == 25 && this->getexecuteGrade() == 5)
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}