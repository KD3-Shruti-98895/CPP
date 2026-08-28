#include<iostream>
using namespace std;

void menu()
{
    cout<<"1.Add Time."<<endl;
    cout<<"2.Display All Time"<<endl;
    cout<<"3.Display only hrs of all time objects"<<endl;
    cout<<"4.Exit..."<<endl;
}

class Time
{
    private:
    int hr;
    int min;
    int sec;
    public:
    Time(void) : hr(0), min(0), sec(0)
    { }
    Time(int hr, int min, int sec) : hr(hr), min(min), sec(sec)
    { }
    void getHour(){
        cout<<"Hour: "<<hr<<endl;
    }
    void getMinute(){
        cout<<"Minute: "<<min<<endl;
    }
    void getSeconds(){
        cout<<"Seconds: "<<sec<<endl;
    }
    void printTime(){
        cout<<""<<hr<<" : "<<""<<min<<" : "<<""<<sec<<endl;
    }
    void setHour(int hr){
        this->hr = hr;
    }
    void setMinute(int min){
        this->min = min;
    }
    void setSeconds(int sec){
        this->sec = sec;
    }
    void acceptTime(){
        cout<<"Enter hour: ";
        cin>>this->hr;
        cout<<"Enter minute: ";
        cin>>this->min;
        cout<<"Enter seconds: ";
        cin>>this->sec;
    }

};

int main()
{   
    int choice = 0;
    int index;
    cout<<"Enter the number of objects: "<<endl;
    cin>>index;
    Time *arr = new Time[index];
    while(choice != 4)
    {
        menu();
       cout<<"Enter your choice: "<<endl;
       cin>>choice;
        switch(choice){
            case 1:
            {   cout<<"Add time:- "<<endl;
                for(int j = 0; j < index; j++)
                {
                    arr[j].acceptTime();
                }

            }
              break;
            case 2:
            {
                cout<<"Display Time:- "<<endl;
                for(int i=0; i<index; i++){
                    arr[i].printTime();
                }
            }
              break;
            case 3:
            {
                cout<<"Display only Hours: "<<endl;
                for(int i=0; i<index; i++){
                    arr[i].getHour();
                }

            }
              break;
            case 4:
            {
                cout<<"Exit..."<<endl;
            }
              break;
            default:
              {cout<<"Invalid option."<<endl;}
              break;
        }
    }

    delete[] arr;
    arr = NULL;
    return 0;
}