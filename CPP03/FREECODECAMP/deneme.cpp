#include <iostream>

class MenuItem
{
public:
    std::string name;
    double calories;

    void print()
    {
        std::cout << name << " (" << calories << " cal)" << std::endl;
    }
};

class Drink : public MenuItem
{
public:
    double ounces;

    double cal_per_ounce()
    {
        return (calories / ounces);
    }
};

int main()
{

    MenuItem french_fries;

    french_fries.name = "French Fries";
    french_fries.calories = 400;

    french_fries.print();

    Drink hot_chocolate;

    hot_chocolate.name = "Hot Chocolate";
    hot_chocolate.calories = 300;
    hot_chocolate.ounces = 8;

    hot_chocolate.print();

    std::cout << "cal/ounce: " << hot_chocolate.cal_per_ounce() << std::endl;
    MenuItem *ptr;

    ptr = &hot_chocolate;

    ptr->print();

    return (0);
}