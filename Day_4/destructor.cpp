#include<iostream>
using namespace std;

 class Complex
 {
    private: 
    int real;
    int img;
    public:
    Complex(void) : real(0), img(0)
    { }
    Complex(int real, int img) : real(real), img(img)
    { }
    void printRecord(){
        cout<<"Real: "<<real<<endl;
        cout<<"Img: "<<img<<endl;
    }
    ~Complex()
    { 
        cout<<"Complex..."<<endl;
    }
 };

 int main(){
    Complex c1;
    c1.printRecord();
    Complex c2(10,20);
    c2.printRecord();
 }