#include "Converter.hpp"

Converter::Converter(){}

Converter::~Converter() {}

void Converter::convertChar(char i)
{
    printFunc(i,i,i,i);
}

void Converter::convertInt(int i)
{
    printFunc(i,i,i,i);
}

void Converter::convertFloat(float i)
{
    printFunc(i,i,i,i);
}

void Converter::convertDouble(double i)
{
    printFunc(i,i,i,i);
}

void Converter::pseudoPrinter(std::string str)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << str << "f" << std::endl;
    std::cout << "double: " << str << std::endl;
}

void Converter::impossiblePrinter()
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
}

void Converter::convert(std::string str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
    {
        pseudoPrinter(str);
        return ;
    }
    const char *cstr = str.c_str();
    int i = 0;
    int f_c = 0;
    int d_c = 0;
    if (cstr[1] == '\0' && isalpha(cstr[0]))
    {
        convertChar(cstr[0]);
        return ;
    }
    while (cstr[i])
    {
        if (cstr[i] == 'f')
            f_c++;
        else if (cstr[i] == '.')
            d_c++;
        i++;
    }
    i = 0;
    if (f_c > 1 || d_c > 1)
    {
        impossiblePrinter();
    }
    try
    {
        if ((isdigit(cstr[i]) || cstr[i]) && f_c == 0 && d_c == 0)
            convertInt(std::stoi(str));
        else if (f_c == 1 && d_c == 1)
            convertFloat(std::stof(str));
        else if (f_c == 0 && d_c == 1)
            convertDouble(std::stod(str));
        else
            throw (42);
    }
    catch(const std::out_of_range & e)
    {
        try
        {
            Converter::printFunc(-1,-1,std::stof(str),std::stof(str));
        }
        catch(const std::out_of_range & e)
        {
            std::cout << "Out of all range\n";
        }
    }
    catch (...)
    {
        impossiblePrinter();
    }
}

void Converter::printFunc(char a, int b, float c, double d)
{
    if ((b == 0 || b < 0 || b >= 127 || b <= 32) || (b >= INT_MAX || b <= INT_MIN))
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" <<static_cast<char>(a) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(b) << std::endl;
    int x = (int)c;
    if (c == (float)x)
    {
        std::cout << "float: " << c << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << c << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}