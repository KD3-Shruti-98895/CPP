#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int mon;
    int year;
    public:
    Date(void) : day(0), mon(0), year(0)
    { }
    void acceptDate()
    {
        cout<<"Day: "<<endl;
        cin>>day;
        cout<<"Mon: "<<endl;
        cin>>mon;
        cout<<"Year: "<<endl;
    }
    ~Date()
    { }

};

class Employee
{
    private:
    string name;
    int age;
    double salary;
    public:
    Employee (void) : name("null"), age(0), salary(0.00)
    { cout;}
}; 