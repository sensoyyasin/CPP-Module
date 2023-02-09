#include "Bureaucrat.hpp"

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
        Bureaucrat bureaucrat("Emanuel", 2);
        std::cout << bureaucrat << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}