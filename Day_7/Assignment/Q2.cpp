#include<iostream>
using namespace std;

class Employee
{ 
    private:
    int ID;
    double salary;
    public:
    Employee (void) : ID(0), salary(0.0)
    { }
    Employee (int id,double salary)
    { this->ID=id;
      this->salary=salary;
    }

    void setID(int id)
    {
       this->ID=id;
    }
    int getID()
    {
        return this->ID=ID;
    }

    void setSalary(double salary)
    {
       this->salary=salary;
    }
    void getSalary()
    {
        cout<<"Salary: "<<salary;
    }

    void accept()
    {
        cout<<"ID: ";
        cin>>ID;
        cout<<"Salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"ID: "<<ID<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

class Manager : virtual public Employee
{ 
    private:
    double bonus;
    public:
    Manager (void) : bonus(0.0)
    { }
    Manager (int id,double salary, double bonus) : Employee(id,salary), bonus(bonus)
    { }
    void setBonus(double bonusx)
    {
       this->bonus=bonus;
    }
    double getBonus()
    {
        return this->bonus=bonus;
    }

    void accept()
    {
        Employee::accept();
        cout<<"Bonus: ";
        cin>>bonus;
    }
    void display()
    {
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
    }

    protected:
    void acceptManager()
    {
        cout<<"Enter bonus: ";
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"Bonus: "<<bonus<<endl;
    }
};

class Salesman : virtual public Employee
{
    private:
    double commission;
    public:
    Salesman(void) : commission(0.0)
    { }
    Salesman (int id, double salary, double commission) : Employee(id,salary), commission(commission)
    { }
    
    void setCommission()
    {
        this->commission=commission;
    }
    double getCommission()
    {
        return this->commission=commission;
    }

    void accept()
    {
        Employee::accept();
        cout<<"Commission: ";
        cin>>commission;
    }
    void display()
    {
        Employee::display();
        cout<<"Commission: "<<commission<<endl;
    }

    protected:
    void acceptSalesman()
    {
      cout<<"Commission: ";
      cin>>commission;  
    }
    void displaySalesman()
    {
        cout<<"Commission: "<<commission;
    }
};

class SalesManager : public Manager, public Salesman
{
    public:
    SalesManager(void)
    { }
    SalesManager (int id,double salary, double bonus, double commission) 
    { }
    void accept()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }

    void display()
    {
        Employee::display();
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};

int main()
{
    SalesManager sm1;
    sm1.accept();
    sm1.display();

    Manager m1;
    m1.accept();
    m1.display();

    Salesman s1(21,3000,220);
    s1.display();

    return 0;
}