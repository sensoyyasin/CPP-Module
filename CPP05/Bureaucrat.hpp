#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>

class Bureaucrat
{
private:
    std::string name;
    int gradeRange;
public:
    Bureaucrat();
    Bureaucrat(const std::string name, int gradeRange);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &src);

    void GradeTooLowException();
    void GradeTooHighException();

    std::string getName();

    void setgradeRange(int Range);
    int  getgradeRange();
};

#endif