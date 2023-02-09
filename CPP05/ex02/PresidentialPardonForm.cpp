#include "PresidentPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->indicating = false;
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    this->indicating = false;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int signPoint, int execPoint)
{
    this->indicating = false;
    this->name = name;
    this->signGrade = signPoint;
    this->executeGrade = execPoint;
    if (this->signGrade < 1 || this->executeGrade < 1)
        throw PresidentialPardonForm::GradeTooHighException();
    if (this->signGrade > 150 || this->executeGrade > 150)
        throw PresidentialPardonForm::GradeTooLowException();
}

void    PresidentialPardonForm::haveYouSign(Bureaucrat &bureaucrat)
{
    if ((bureaucrat.getgradeRange() < this->getsignGrade()) && (bureaucrat.getgradeRange() < this->getsignGrade()))
        this->indicating = true;
    else
        this->indicating = false;
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return ("Too Low Exception");
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return ("Too High Exception");
}

void PresidentialPardonForm::setIndicate(bool indicator)
{
    this->indicating = indicator;
}

bool PresidentialPardonForm::getIndicate() const
{
    return (this->indicating);
}

void PresidentialPardonForm::setName(std::string name)
{
    this->name = name;
}

std::string PresidentialPardonForm::getName() const
{
    return (this->name);
}

void PresidentialPardonForm::setsignGrade(int signgrade)
{
    this->signGrade = signgrade;
}

int PresidentialPardonForm::getsignGrade() const
{
    return (this->signGrade);
}

void PresidentialPardonForm::setexecuteGrade(int execgrade)
{
    this->executeGrade = execgrade;
}

int PresidentialPardonForm::getexecuteGrade() const
{
    return (this->executeGrade);
}

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm &src)
{
    if (src.getIndicate() == true && src.getsignGrade() == 25 && src.getexecuteGrade() == 5)
        o << " signed " << src.getName();
    else
        o << ", couldn't sign " << src.getName() << " because " << src.getsignGrade() << " and " << src.getexecuteGrade() << " was lower than bureaucrat Grade";
    return (o);
}