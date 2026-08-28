#include<iostream>
using namespace std;

class Person
{ 
    private:
    string name;
    int age;
    public:
    Person(void)
    { cout<<"Person(void)"<<endl; }
    Person(int age) : age(age)
    {   
        cout<<"Person(int age)"<<endl;
    }
};

class Employee : public Person 
{
    private:
    int empID;
    double salary;
    public:
    Employee(void) 
    { cout<<"Employee (void)"<<endl;}
    Employee(int empID) : empID(empID)
    {
        cout<<"Employee (int empID)"<<endl;
    }


};

int main()
{  
    
    Employee e2(20);
    return 0;
}