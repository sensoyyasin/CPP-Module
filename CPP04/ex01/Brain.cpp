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
    std::string *ideas = src.getIdeas();
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = ideas[i];
        i++;
    }
    return (*this);
}

std::string *Brain::getIdeas() const
{
    return((std::string *)ideas);
}