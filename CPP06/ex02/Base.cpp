#include "Base.hpp"

void identify(Base *p)
{
    //It prints the actual type of the object pointed to by p: "A", "B" or "C".
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void identify(Base &p)
{
    //It prints the actual type of the object pointed to by p: "A", "B" or "C".
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(&p))
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Base *generate(void)
{
    //It randomly instanciates A, B or C and returns the instance as a Base pointer.
    srand(time(0));
    int num = rand() % 3;
    //std::cout << num << std::endl;
    Base *ptr = nullptr;

    try
    {
        if (num == 0)
            ptr = dynamic_cast<Base*>(new A);
        else if (num == 1)
            ptr = dynamic_cast<Base*>(new B);
        else if (num == 2)
            ptr = dynamic_cast<Base*>(new C);
        return (ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (NULL);
    }
}