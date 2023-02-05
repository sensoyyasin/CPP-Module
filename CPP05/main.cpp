#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bureaucrat("Yasin", 160);

    try
    {
        if (bureaucrat.getgradeRange() < 1)
            throw ("GradeTooLowException");
        else if (bureaucrat.getgradeRange() > 150)
            throw ("GradeTooHighException");
        else if (bureaucrat.getgradeRange() == 1)
            throw 1;
        else if (bureaucrat.getgradeRange() == 150)
            throw 150;
        else
            std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getgradeRange() << std::endl;
    }
    catch (int value)
    {
        std::cout << value << std::endl;
        if (value == 1)
            std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getgradeRange() << std::endl;
        if (value == 150)
            std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getgradeRange() << std::endl;
    }
    catch (...)
    {
        std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getgradeRange() << std::endl;
    }
    return (0);
}