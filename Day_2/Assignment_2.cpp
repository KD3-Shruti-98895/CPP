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

    void isLeapYear(){
        if((year%4==0 && year%100!=0) || year%400 == 0){
            cout<<"This year "<<" "<<year<<" "<<"is Leap Year"<<endl;
        }
        else{
            cout<<"This year"<<" "<<year<<" "<<"is not a Leap Year"<<endl;
        }
    }

};

void menu(){
    cout<<"1.Initialize Date"<<endl;
    cout<<"2.Print Date"<<endl;
    cout<<"3.Accept Date"<<endl;
    cout<<"4.Check is it a Leap Year"<<endl;
    cout<<"5.Exit"<<endl;
}

int main() {
    Date dt;
    int n;
    menu();
    cin>>n;
    while( n != 5){
        menu();
        cin>>n;
        switch(n){
            case 1:
             dt.initDate(); 
             break;
            case 2:
             dt.printDate();
             break;
            case 3:
             dt.acceptDate();
             break;
            case 4:
             dt.isLeapYear();
             break;
            case 5:
             cout<<"Exit";
             break;
            default:
             cout<<"Invalid option try again"<<endl;
        }
    }
}