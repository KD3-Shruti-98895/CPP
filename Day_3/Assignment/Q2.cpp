#include<iostream>
using namespace std;

class TollBooth
{  
    private:
    unsigned int payed;
    unsigned int notpayed;
    int cars;
    double money;

    public:
    TollBooth (void){
        this->payed = 0;
        this->notpayed = 0;
        this->money = 0;
    }

    int payingCar( ){
       ++payed;
       this->money = money+0.50 ;
       cout<<"The toll has been payed"<<endl;
       return payed;
    }

    int nopayCar(){
        ++notpayed;
        cout<<"The toll is not payed"<<endl;
        return notpayed;
    }

    void printOnConsole(void){
        cout<<"Number of cars who payed: "<<this->payed<<endl;
        cout<<"Number of cars who not payed: "<<this->notpayed<<endl;
        cout<<"Total number of cars: "<<payed+notpayed<<endl;
        cout<<"Total toll collected: "<<this->money<<endl;
    }

};

void menu(){
    cout<<"1.If car payed."<<endl;
    cout<<"2.If car not payed."<<endl;
    cout<<"3.To print the data."<<endl;
    cout<<"4.Exit..."<<endl;
}

int main()
{   
   int n; 
   TollBooth t1;
   do{     
      menu();
      cin>>n;
      switch(n){
        case 1:
           {
             t1.payingCar();
           }
           break;
        case 2:
           {
            t1.nopayCar();
           }
           break;
        case 3:
           {
            t1.printOnConsole();
           }
           break;
        case 4:
           {
            cout<<"Exit."<<endl;
           }
           break;
        default:
           {
            cout<<"Invalide option try again."<<endl;
           }
           break;
      }
   }while(n != 4);    
   return 0;
}