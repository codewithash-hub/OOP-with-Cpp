#include <iostream>
#include <string>

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
};

int main()
{
    Employee emp1;
    emp1.Name = "Ash";
    emp1.Age = 25;
    emp1.Company = "Microsoft";
    emp1.introduceYourself();
    return 0;
}