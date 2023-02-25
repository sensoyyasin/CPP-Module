#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        Bureaucrat bureaucrat("bureaucrat", 88);
        Form form("Form", 100, 80);

        form.beSigned(bureaucrat);

        std::cout << bureaucrat;
        std::cout << form << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}