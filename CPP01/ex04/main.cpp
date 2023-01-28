#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(int argc, char **argv)
{
    //ifstream -> input reading
    //ofstream -> output writing
    std::ifstream dosya1;
    std::ofstream dosya2;
    std::string temp;
    std::string s1;
    std::string s2;
    std::string beforeoc;
    std::string afteroc;
    std::size_t found;

    if (argc != 4)
    {
        std::cout << "Error" << std::endl;
        exit(1);
    }

    dosya1.open(argv[1]);
    s1 = argv[2];
    s2 = argv[3];
    dosya2.open((std::string)argv[1] + ".replace");

    if (!dosya1.is_open())
    {
        std::cout << "The file couldn't open " << std::endl;
        exit(1);
    }

    while (std::getline(dosya1, temp))
    {
        found = temp.find(s1);
        while (found != std::string::npos)
        {
            beforeoc = temp.substr(0, found);
            afteroc = temp.substr(found + s1.size(), temp.size());
            //String addition -> we have to careful this line so if you wanna use integer
            //!it isn't important because 5+3 = 3+5 but string red + blue = redblue != blue + red = bluered
            temp = beforeoc + s2 + afteroc;
            found = temp.find(s1);
        }
        dosya2 << temp << std::endl;
    }
    // Without "\n"
    // else
    // {
    //     while (dosya1 >> maintemp)
    //     {
    //         if (maintemp == argv[2])
    //             maintemp = argv[3];
    //         dosya2 << maintemp << " ";
    //     }
    std::cout << "\033[1;92mThe file has been opened properly\033[0m" << std::endl;
    dosya1.close();
    dosya2.close();

    return(0);
}
