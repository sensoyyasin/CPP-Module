#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Default destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    (void) src;
    return (*this);
}

std::string *Brain::getIdeas() const
{
    return((std::string *)ideas);
}