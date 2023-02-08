#include "Form.hpp"

Form::Form()
{
    this->indicating = false;
    std::cout << "Form Constructor called" << std::endl;
}

Form::~Form()
{
    this->indicating = false;
}

Form::Form(std::string name, int signPoint, int execPoint)
{
    this->indicating = false;
    this->name = name;
    this->signGrade = signPoint;
    this->executeGrade = execPoint;
    if (this->signGrade < 1 || this->executeGrade < 1)
        throw Form::GradeTooHighException();
    if (this->signGrade > 150 || this->executeGrade > 150)
        throw Form::GradeTooLowException();
}

void    Form::haveYouSign(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getgradeRange() < this->getsignGrade())
        this->indicating = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too Low Exception");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Too High Exception");
}

void Form::setIndicate(bool indicator)
{
    this->indicating = indicator;
}

bool Form::getIndicate() const
{
    return (this->indicating);
}

void Form::setName(std::string name)
{
    this->name = name;
}

std::string Form::getName() const
{
    return (this->name);
}

void Form::setsignGrade(int signgrade)
{
    this->signGrade = signgrade;
}

int Form::getsignGrade() const
{
    return (this->signGrade);
}

void Form::setexecuteGrade(int execgrade)
{
    this->executeGrade = execgrade;
}

int Form::getexecuteGrade() const
{
    return (this->executeGrade);
}

std::ostream &operator<<(std::ostream &o, const Form &src)
{
    if (src.getIndicate() == true)
        o << src.getName() << ", form signed " << std::endl;
    o << src.getName() << ", form didn't sign ";
    return (o);
}