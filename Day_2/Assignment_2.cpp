#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(){
        day = 1;
        month = 1;
        year = 100;
    }

    void printDate(){
        cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void acceptDate(){
       cout<<"Enter the Day: "<<endl;
       cin>>day;
       cout<<"Enter the Month: "<<endl;
       cin>>month;
       cout<<"Enter the Year: "<<endl;
       cin>>year;
    }

    bool isLeapYear(){
        if((year%4==0 && year%100!=0) || year%400 == 0){
            return true;
        }
        else{
            return false;
        }
    }

};

void menu(){
    cout<<"1.Print Date"<<endl;
    cout<<"2.Accept Date"<<endl;
    cout<<"3.Check is it a Leap Year"<<endl;
    cout<<"4.Exit"<<endl;
}

int main() {
    Date dt;
    dt.initDate();
    int n;
    do
    {
        menu();
        cin>>n;
        switch(n){
            case 1:
             dt.printDate();
             break;
            case 2:
             dt.acceptDate();
             break;
            case 3:         
             if (dt.isLeapYear() ){
                cout<<"It is a Leap Year"<<endl;
             }
             else{
                cout<<"Not a Leap Year"<<endl;
             }
             break;
            case 4:
             cout<<"Exit";
             break;
            default:
             cout<<"Invalid option try again"<<endl;
        }
    }while (n!=4);
    
}