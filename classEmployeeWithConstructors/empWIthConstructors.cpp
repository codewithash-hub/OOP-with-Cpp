#include <iostream>

using namespace std;

class Employee
{
    public:
        string Name;
        string Company;
        int Age;
        
        void introduceYourself()
        {
            cout << "I'm " << Name << " I work at " << Company << " and i'm " << Age << " years old."<< endl;
        }

        // ceating a constructor
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
};

int main()
{
    // invoking a constructor
    Employee emp1 = Employee("Ashley", "Microsoft", 25);
    emp1.introduceYourself();
    return 0;
} 
