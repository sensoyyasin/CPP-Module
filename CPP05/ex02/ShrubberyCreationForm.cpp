#include "ShrubberyCreationForm.hpp"

Shrubberyform::Shrubberyform()
{
    this->indicating = false;
    std::cout << "Shrubberyform Constructor called" << std::endl;
}

Shrubberyform::~Shrubberyform()
{
    this->indicating = false;
}

Shrubberyform::Shrubberyform(std::string name, int signPoint, int execPoint)
{
    this->indicating = false;
    this->name = name;
    this->signGrade = signPoint;
    this->executeGrade = execPoint;
    if (this->signGrade < 1 || this->executeGrade < 1)
        throw Shrubberyform::GradeTooHighException();
    if (this->signGrade > 150 || this->executeGrade > 150)
        throw Shrubberyform::GradeTooLowException();
}

void    Shrubberyform::haveYouSign(Bureaucrat &bureaucrat)
{
    if ((bureaucrat.getgradeRange() < this->getsignGrade()) && (bureaucrat.getgradeRange() < this->getsignGrade()))
        this->indicating = true;
    else
        this->indicating = false;
}

const char *Shrubberyform::GradeTooLowException::what() const throw()
{
    return ("Too Low Exception");
}

const char *Shrubberyform::GradeTooHighException::what() const throw()
{
    return ("Too High Exception");
}

void Shrubberyform::setIndicate(bool indicator)
{
    this->indicating = indicator;
}

bool Shrubberyform::getIndicate() const
{
    return (this->indicating);
}

void Shrubberyform::setName(std::string name)
{
    this->name = name;
}

std::string Shrubberyform::getName() const
{
    return (this->name);
}

void Shrubberyform::setsignGrade(int signgrade)
{
    this->signGrade = signgrade;
}

int Shrubberyform::getsignGrade() const
{
    return (this->signGrade);
}

void Shrubberyform::setexecuteGrade(int execgrade)
{
    this->executeGrade = execgrade;
}

int Shrubberyform::getexecuteGrade() const
{
    return (this->executeGrade);
}

std::ostream &operator<<(std::ostream &o, const Shrubberyform &src)
{
    if (src.getIndicate() == true && src.getsignGrade() == 145 && src.getexecuteGrade() == 137)
        o << " signed " << src.getName();
    else
        o << ", couldn't sign " << src.getName() << " because " << src.getsignGrade() << " and " << src.getexecuteGrade() << " was lower than bureaucrat Grade";
    return (o);
}