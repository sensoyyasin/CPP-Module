#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int gradeRange)
{
    if (gradeRange < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeRange > 150)
        throw Bureaucrat::GradeTooLowException();
    this->name = name;
    this->gradeRange = gradeRange;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too Low Exception");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too High Exception");
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::setgradeRange(int Range)
{
    this->gradeRange = Range;
}

int Bureaucrat::getgradeRange() const
{
    return (this->gradeRange);
}

void Bureaucrat::increment()
{
    this->gradeRange--;
}

void Bureaucrat::decrement()
{
    this->gradeRange++;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
    if (src.getgradeRange() == 1)
        return (o << src.getName() << ", bureaucrat grade(MAX POINT) " << src.getgradeRange());
    else if (src.getgradeRange() == 150)
        return (o << src.getName() << ", bureaucrat grade(MIN POINT) " << src.getgradeRange());
    else
        return (o << src.getName() << ", bureaucrat grade " << src.getgradeRange());
}