#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
    size_t  size;
    T       *arr;
    
    Array() {}

    Array(unsigned int n)
    {
        this->size = n;
        this->arr = new T[n];
    }
    ~Array() {}

    //Operator overload.
    T &operator[](size_t index)
    {
        std::cout << "INDEX DEGERİ: " << index << std::endl;
        std::cout << this->arr[index - 1] << std::endl;
        try
        {
            if (index >= this->size || index < 0)
            {
                throw(Array::OutOfBound());
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        return (arr[index]);
    }

    //equal operator 
    T &operator=(T& other)
    {
        if (this == &other)
        {
            for (int i = 0; i < Size(); i++)
                other[i] = this->arr[i];
            return (*this);
        }
        else
            delete[] arr;
    }
    
    size_t  Size(void) const
    {
        return (this->size);
    }

    class OutOfBound : public std::exception
    {
        public:
            const char *what() const _NOEXCEPT
            {
                return ("Bad index!");
            }
    };
};

#endif