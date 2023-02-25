#include "Converter.hpp"

Converter::Converter() {}

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
    const char *cstr = str.c_str(); //string to char *
    int i = 0;
    int f_c = 0;
    int d_c = 0;
    int n_c = 0;
    int d = 1;
    while (cstr[d] && (cstr[0] != '-' || cstr[0] != '+'))
    {
        if (cstr[d] == '-' || cstr[d] == '+')
            return ;
        else if (isalpha(cstr[d]) && cstr[d] != 'f')
            return ;
        else if (isalpha(cstr[0]) && isdigit(cstr[1]))
            return ;
        d++;
    }
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
        else if (cstr[i] == '-')
            n_c++;
        i++;
    }
    i = 0;
    if (f_c > 1 || d_c > 1 || n_c > 1)
    {
        impossiblePrinter();
        return;
    }
    try
    {
        if ((isdigit(cstr[i]) || cstr[i]) && f_c == 0 && d_c == 0)
            convertInt(std::stoi(str)); //there is a throw inside.
        else if (f_c == 1 && d_c == 1)
            convertFloat(std::stof(str));
        else if (f_c == 0 && d_c == 1)
            convertDouble(std::stod(str));
        else if (str.length() >= 11)
            throw (42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Converter::printFunc(char a, int b, float c, double d)
{
    if (b < 0)
        std::cout << "char: " << "impossible" << std::endl;
    else if (a <= 32 || a >= 127 || (b >= INT_MAX || b <= INT_MIN) || (b <= 32 || b >= 127))
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" << static_cast<char>(a) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(b) << std::endl;

    int x = (int)c; //42.0f
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