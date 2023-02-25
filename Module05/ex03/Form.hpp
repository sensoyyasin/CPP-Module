#ifndef FORM_HPP
# define FORM_HPP

class Form;
class Bureaucrat;

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
private:
    std::string name;
    bool indicating;
    int signGrade;
    int executeGrade;
public:
    Form();
    virtual ~Form();
    Form(const std::string name, int signPoint, int execPoint);

    void setName(std::string name);
    std::string getName() const;

    void setsignGrade(int signgrade);
    int getsignGrade() const;

    void setexecuteGrade(int execgrade);
    int getexecuteGrade() const;

    void setIndicate(bool indicator);
    bool getIndicate() const;

    void haveYouSign(Bureaucrat &bureaucrat);

    void execute(Bureaucrat const &executor) const;
    virtual void executeForm() const = 0;

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

std::ostream &operator<<(std::ostream &o, const Form &src);

#endif