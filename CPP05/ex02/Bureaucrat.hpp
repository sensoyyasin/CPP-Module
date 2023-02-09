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

    void increment();
    void decrement();

    std::string getName() const;

    void setgradeRange(int Range);
    int  getgradeRange() const;

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

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src);

#endif