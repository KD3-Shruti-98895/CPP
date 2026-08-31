#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date (void) : day(0), month(0), year(0)
    { }
    Date (int day, int month, int year) : day(day), month(month), year(year)
    { } 
    void acceptDate()
    {
        cout<<"Enter day: "<<endl;
        cin>>day;
        cout<<"Enter month: "<<endl;
        cin>>month;
        cout<<"Enter year: "<<endl;
        cin>>year;
    }
    void printDate()
    {
        cout<<""<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Person
{
    private:
    string name;
    string add;
    Date birthDate;
    public:
    Person (void) : name(""), add("") 
    { }
    Person(string name, string add, Date birthDate) : name(name), add(add), birthDate(birthDate)
    { }
    Person(string name, string add, int day, int month, int year) : name(name), add(add), birthDate(day,month,year)
    { }
    void acceptRecord()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter address: "<<endl;
        cin>>add;
        cout<<"Enter Birth date: "<<endl;
        this->birthDate.acceptDate();
    }

    void printRecord()
    {
        cout<<" "<<name<<endl;
        cout<<" "<<add<<endl;
        this->birthDate.printDate();
    }
};

class Student 
{
    private:
    int id;
    int marks;
    string course;
    Date joinDate;
    Date endDate;
    public:
    Student(void) : id(0), marks(0), course("")
    { }
    Student(int id, int marks,string course, int d, int m, int y, int day,int month,int year) :
     id(id), marks(marks), course(course), joinDate(d,m,y), endDate(day,month,year)
     { }

    void printRecord()
    {
        cout<<id<<endl<<marks<<endl<<course<<endl;
        this->joinDate.printDate();
        this->endDate.printDate();
    }

    void acceptRecord()
    {
        cout<<"Enter ID: "<<endl;
        cin>>id;
        cout<<"Enter marks: "<<endl;
        cin>>marks;
        cout<<"Enter course: "<<endl;
        cin>>course;
        this->joinDate.acceptDate();
        this->endDate.acceptDate(); 
    }
};

int main()
{
    Student st1(1,98,"Java",1,1,2000,2,2,2000);
    st1.printRecord();
    Student st2;
    st2.acceptRecord();
    st2.printRecord();
    return 0;
}

int main1()
{
    Person p1("Arya", "Karad", 12,12,2003 );
    p1.printRecord();
    Person p2;
    p2.acceptRecord();
    p2.printRecord();
    Date dt;
    Person p3("shreya", "pune", dt);
    p3.printRecord();

    return 0;

}