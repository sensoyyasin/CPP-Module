#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->indicating = false;
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    this->indicating = false;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int signPoint, int execPoint)
{
    this->indicating = false;
    this->name = name;
    this->signGrade = signPoint;
    this->executeGrade = execPoint;
    if (this->signGrade < 1 || this->executeGrade < 1)
        throw RobotomyRequestForm::GradeTooHighException();
    if (this->signGrade > 150 || this->executeGrade > 150)
        throw RobotomyRequestForm::GradeTooLowException();
}

void    RobotomyRequestForm::haveYouSign(Bureaucrat &bureaucrat)
{
    if ((bureaucrat.getgradeRange() < this->getsignGrade()) && (bureaucrat.getgradeRange() < this->getsignGrade()))
        this->indicating = true;
    else
        this->indicating = false;
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return ("Too Low Exception");
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return ("Too High Exception");
}

void RobotomyRequestForm::setIndicate(bool indicator)
{
    this->indicating = indicator;
}

bool RobotomyRequestForm::getIndicate() const
{
    return (this->indicating);
}

void RobotomyRequestForm::setName(std::string name)
{
    this->name = name;
}

std::string RobotomyRequestForm::getName() const
{
    return (this->name);
}

void RobotomyRequestForm::setsignGrade(int signgrade)
{
    this->signGrade = signgrade;
}

int RobotomyRequestForm::getsignGrade() const
{
    return (this->signGrade);
}

void RobotomyRequestForm::setexecuteGrade(int execgrade)
{
    this->executeGrade = execgrade;
}

int RobotomyRequestForm::getexecuteGrade() const
{
    return (this->executeGrade);
}

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &src)
{
    if (src.getIndicate() == true && src.getsignGrade() == 72 && src.getexecuteGrade() == 45)
        o << " signed " << src.getName();
    else
        o << ", couldn't sign " << src.getName() << " because " << src.getsignGrade() << " and " << src.getexecuteGrade() << " was lower than bureaucrat Grade";
    return (o);
}