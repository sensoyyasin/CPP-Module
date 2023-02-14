#include <iostream>

class Shape {
public:
virtual void Draw() 
{
std::cout << "Drawing Shape\n";
}
};

class Circle : public Shape {
public:
void Draw() {
std::cout << "Drawing Circle\n";
}
};

class Square : public Shape {
public:
void Draw() {
std::cout << "Drawing Square\n";
}
};

int main() {
Shape *shape1 = new Circle();
Shape *shape2 = new Square();

shape1->Draw();
shape2->Draw();

return 0;
}