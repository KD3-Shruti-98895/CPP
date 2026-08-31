#include<iostream>
using namespace std;

class Base
{
    private:
    int num1;
    int num2;
    public:
    Base (void) : num1(0), num2(0)
    { }
    Base ( int num1, int num2) : num1(num1), num2(num2)
    { }

    void printRecord()
    { 
        cout<<""<<num1<<endl;
        cout<<""<<num2<<endl;
    }

    void showRecord()
    {
        cout<<""<<num1<<endl;
        cout<<""<<num2<<endl;
    }
};

class Derived : public Base
{
    private:
    int num3;
    public:
    Derived (void) : num3(0)
    { }
    Derived (int num3) : num3(num3)
    { }
    Derived (int num1,int num2,int num3) : Base(num1,num2), num3(num3)
    { }

    void printRecord()
    {
        cout<<""<<num3<<endl;
    }

    void displayRecord()
    {
        this->showRecord();
        cout<<""<<num3<<endl;
    }
};

int main()
{
    // Derived d1(11);
    // d1.printRecord();
    Derived d2(10,20,30);
    d2.displayRecord();
    Base b1;
    b1 = d2;
    b1.printRecord();

    return 0;
}