#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    Complex( void) : real(0), img(0)
    { } 
    Complex(int real,int img) : real(real), img(img)
    {  }
    void printRecord(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imag: "<<img<<endl;
    }
    
};

int main(){
    Complex arr[2] = {Complex(10,20), Complex(40,30)};
    for(int i=0; i<2; i++){
        arr[i].printRecord();
    }
  return 0;
}
