#include <iostream>

class Printer
{
private:
    std::string _name;
    int _availablePaper;
public:
    Printer(std::string name, int _availablePaper)
    {
        this->_name = name;
        this->_availablePaper = _availablePaper;
    }
    void Print(std::string txtDoc)
    {
        int requiredPaper = txtDoc.length() / 10; //40 characters
        if (requiredPaper > _availablePaper)
        {
            throw 101; //->break the execution
            //return; -> it doesn't make sense
        }
        std::cout << txtDoc << std::endl;
        _availablePaper -= requiredPaper;
    }
};

int main()
{
    Printer printer("HP DeskJet 1234", 10);
    try
    {
        printer.Print("Hello, my name is yasin, and also im an electrical engineer");
        printer.Print("Hello, my name is yasin, and also im an electrical engineer");
        printer.Print("Hello, my name is yasin, and also im an electrical engineer");
    }
    catch(int exCode)
    {
        if (exCode == 101)
            std::cout << "Exception : " << exCode << std::endl;
    }
    catch(...)
    {
        std::cout << "Exception happened!" << std::endl;
    }
    return (0);
}