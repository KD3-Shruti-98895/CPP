#include<iostream>
using namespace  std;

void menu(){
    cout<<"1.Calculate Volume with default values."<<endl;
    cout<<"2.Calculate Volume with length,breadth and height with same value."<<endl;
    cout<<"3.Calculate Volume with different lenght,breadth and height values."<<endl;
    cout<<"4.Exit"<<endl;
}
class Volume
{
    private:
    int len;
    int bth;
    int hth;
    int vol;
    public:
    //parameterless contr
    Volume (void) 
    {
        this->len = 10;
        this->bth = 20;
        this->hth = 10;
    }
    //singleton contr
    Volume (int val)
    {
        this->len = val;
        this->bth = val;
        this->hth = val;
    }
    //parameterized contr
    Volume (int a, int b, int c)
    {
        this->len = a;
        this->bth = b;
        this->hth = c;
    }
    
    int calculateVolume( ){
       this->vol = len*bth*hth;
       return vol;
    }
    void printVolume(){
        cout<<"Volume: "<<this->vol<<endl;
    }

};

int main() 
{
    int n;
    do
    {
        menu();
        cin>>n;
        switch (n)
        {
        case 1:
            {Volume v1;
             v1.calculateVolume();
             v1.printVolume();
            }
            break;
        case 2:
            {
              int val;
              cout<<"Enter a value: ";
              cin>>val;
              Volume v2(val);
              v2.calculateVolume();
              v2.printVolume();
            }

            break;
        case 3:
            {
              int a, b, c;
             cout<<"Enter the len: ";
             cin>>a;
             cout<<"Enter the breadth: ";
             cin>>b;
             cout<<"Enter the height: ";
             cin>>c;
             Volume v3(a,b,c);
             v3.calculateVolume();
             v3.printVolume();
            }
            break;
        case 4: 
            {cout<<"Exit..."<<endl;}
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }while(n != 4);
    return 0;
}