#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"

int main()
{
    //Test case1:
    // try
    // {
    //     Bureaucrat bureaucrat("Joseph", -1);
    // }
    // catch(Bureaucrat::GradeTooHighException &e){
    //     std::cout << "Too High Exception" << std::endl; }
    // catch(Bureaucrat::GradeTooLowException &e){
    //     std::cout << "Too Low Exception" << std::endl; }
    

    //Test Case2:
    try
    {
        Bureaucrat bureaucrat("Emanuel", 1);
        Shrubberyform s_form("Shrubbery Form", 145, 137);
        RobotomyRequestForm rr_form("RobotomyRequest Form", 72, 45);
        PresidentialPardonForm pp_form("PresidentPardon Form", 25, 5);

        pp_form.haveYouSign(bureaucrat);

        std::cout << bureaucrat;
        std::cout << pp_form << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}