#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Form *rrf;

        rrf = someRandomIntern.makeForm("presidentialpardon", "Bender");
        
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}