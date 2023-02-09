#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class RobotomyRequestForm
{
private:
    std::string name;
    bool indicating;
    int signGrade;
    int executeGrade;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const std::string name, int signPoint, int execPoint);

    void setName(std::string name);
    std::string getName() const;

    void setsignGrade(int signgrade);
    int getsignGrade() const;

    void setexecuteGrade(int execgrade);
    int getexecuteGrade() const;

    void setIndicate(bool indicator);
    bool getIndicate() const;

    void haveYouSign(Bureaucrat &bureaucrat);

    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &src);

#endif