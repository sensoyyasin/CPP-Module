#include <iostream>

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};


//Employee -> parent class -> super class
class Employee : AbstractEmployee
{
private:
    std::string Company;
    int Age;
protected:
    std::string Name;
public:
    //setter
    void setName(std::string name)
    {
        Name = name;
    }
    //getter
    std::string getName()
    {
        return (Name);
    }
    
    void setCompany(std::string company)
    {
        Company = company;
    }
    //getter
    std::string getCompany()
    {
        return (Company);
    }
     //setter
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    //getter
    int getAge()
    {
        return (Age);
    }
    void IntroduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(std::string name, std::string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry No promotion for you!" << std::endl;
    }
    //Virtual fonksiyonlar, temel sınıftaki bir fonksiyonun, 
    //kalıtım yapısında türetilmiş sınıflarda farklı bir şekilde uygulanmasına izin verir.
    //Türetilmiş sınıflarda, temel sınıftaki virtual fonksiyonların uygulanmasını değiştirebilir
    //veya farklı bir uygulama yapabilirsiniz.
    //Virtual fonksiyonlar, nesne tabanlı programlamada sınıflar arasında
    //dinamik bağlantı (dynamic binding) oluşturmak için kullanılır.
    virtual void Work()
    {
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

class Developer : public Employee
{
public:
    std::string FavProgrammingLanguage;
    Developer(std::string name, std::string company, int age, std::string FavProgrammingLanguage)
    :Employee(name, company, age)
    {
        FavProgrammingLanguage = FavProgrammingLanguage;
    }
    void FixBug(){
        std::cout << Name << " fixed bug using" << FavProgrammingLanguage << std::endl;
    }
};

//Inherit the employee class
class Teacher : public Employee
{
public:
    std::string Subject;
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson " << std::endl;
    }
    Teacher(std::string name, std::string company, int age, std::string subject)
        :Employee(name,company,age)
    {
        Subject = subject;
    }
    void Work()
    {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }
};

int main()
{
    //Employee employee1 = Employee("Yasin", "Google", 21);
    //employee1.IntroduceYourself();
    //Employee employee2 = Employee("John", "Amazon", 35);
    Developer dev = Developer("Yasin","YT", 25, "C++");
    Teacher t = Teacher("Jack", "Magdalen College", 35, "History");

    //The most common use of polymorphism is when a
    //parent class reference is used to refer to a child class object
    Employee *e1 = &dev;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();
    //dev.Work();
    //t.Work();
    // t.PrepareLesson();
    // t.AskForPromotion();
    // dev.FixBug();
    // dev.FixBug();
    // dev.FixBug();
    // dev.AskForPromotion();
    //employee1.AskForPromotion();
    //employee2.AskForPromotion();
    //employee2.IntroduceYourself();

    //Changed that name
    // employee1.setName("Burak");
    // employee1.setCompany("McKinsey");
    // employee1.setAge(15);
    // std::cout << employee1.getName() << std::endl;
    // std::cout << employee1.getCompany() << std::endl;
    // std::cout << employee1.getAge() << std::endl;
}
