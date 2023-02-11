#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
    //Test Case2:
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 44);
        ShrubberyCreationForm scForm("ShrubberyCreationForm");
        //PresidentialPardonForm ppForm("PresidentialPardonForm");
        //RobotomyRequestForm rrf("RobotomyRequestForm");

        bureaucrat.signForm(scForm);
        bureaucrat.executeForm(scForm);
        
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}