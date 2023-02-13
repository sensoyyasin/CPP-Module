#include <iostream>

struct Data
{
    std::string s1;
    std::string s2;
};

static uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

static Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main()
{
    Data str;

    str.s1 = "Hello";
    str.s2 = "World";

    uintptr_t serialized_ptr = serialize(&str);

    std::cout << "serialized: " << serialized_ptr << std::endl;

    Data *ptr = deserialize(serialized_ptr);

    std::cout << "serialized: " << ptr->s1 << std::endl;

    return (0);
}