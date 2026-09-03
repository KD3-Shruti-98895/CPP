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

    virtual void accept()
    {
        cout<<"ID: ";
        cin>>ID;
        cout<<"Salary: ";
        cin>>salary;
    }
    virtual void display()
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
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
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
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }

    protected:
    void acceptSalesman()
    {
      cout<<"Commission: ";
      cin>>commission;  
    }
    void displaySalesman()
    {
        cout<<"Commission: "<<commission<<endl;
    }
};

class SalesManager : public Manager, Salesman
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

int menuList()
{
    cout<<"1. Add Manager"<<endl;
    cout<<"2. Add Salesman"<<endl;
    cout<<"3. Add Salesmanager"<<endl;

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    return choice;
}

int main()
{
    Employee *arr[3];
    int index = 0;
    while(index<3)
    {
       int choice = menuList();
        switch(choice)
        {
            case 1:
              arr[index] = new Manager;
              arr[index]->accept();
              index++;
              break;
            case 2:
              arr[index] =new Salesman;
              arr[index]->accept();
              index++;
              break;
            case 3:
              arr[index] =new SalesManager;
              arr[index]->accept();
              index++;
              break;

        }
    }
    
    for(int i=0; i<3; i++)
    {
        arr[i]->display();
    }

    return 0;
}