#include <iostream>

class Vehicle
{
public:
    Vehicle(){}
    void startEngine()
    {
        std::cout << "Starting engine of a vehicle." << std::endl;
    }
};

class FourWhellDrive
{
public:
    void engageFourWheelDrive()
    {
        std::cout << "Engaging four wheel drive." << std::endl;
    }
};

class SUV : public Vehicle , public FourWhellDrive
{
public:
    SUV(){};
    ~SUV(){};
};

int main()
{
    SUV suv;

    suv.startEngine();
    suv.engageFourWheelDrive();
}