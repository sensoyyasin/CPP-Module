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
        Bureaucrat bureaucrat("Emanuel", 110);
        Form form("Bureaucrat Form", 80, 100);
        form.haveYouSign(bureaucrat);

        std::cout << bureaucrat;
        std::cout << form << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}