#include <iostream>

struct Data
{
    std::string s1;
    std::string s2;
};

static uintptr_t serialize(Data *ptr)
{
    //It takes a pointer and converts it to the unsigned integer type uintptr_t.
    //ptr -> donusturulecek veri
    //uintptr_t -> donusturulecek verinin yeni turu
    //reinterpret -> yeniden yorumlama tur degisimi.
    return (reinterpret_cast<uintptr_t>(ptr));
}

static Data* deserialize(uintptr_t raw)
{
    //It takes an unsigned integer parameter and converts it to a pointer to Data.
    return(reinterpret_cast<Data *>(raw));
}

int main()
{
    Data str;

    str.s1 = "Hello";

    uintptr_t serialized_ptr = serialize(&str);

    std::cout << "serialized: " << serialized_ptr << std::endl;

    Data *ptr = deserialize(serialized_ptr);

    std::cout << "serialized: " << ptr->s1 << std::endl;

    return (0);
}