#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int gradeRange)
{
    // if (gradeRange > 150)
    //     throw Bureaucrat::GradeTooLowException();
    // if (gradeRange < 1)
    //     throw Bureaucrat::GradeTooHighException();
    //name const olmali.
    this->name = name;
    this->gradeRange = gradeRange;
}

// void Bureaucrat::GradeTooLowException()
// {
    
// }

// void Bureaucrat::GradeTooHighException()
// {
    
// }

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor" << std::endl;
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

void Bureaucrat::setgradeRange(int Range)
{
    this->gradeRange = Range;
}

int Bureaucrat::getgradeRange()
{
    return (this->gradeRange);
}