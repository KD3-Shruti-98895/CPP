#include<iostream>
using namespace std;

class Complex 
{
    private:
    int num1;
    int num2;
    public:
    void printRecord(void){
        cout<<"num1: "<<this->num1<<endl;
        cout<<"num2: "<<this->num2<<endl;
    }
    void acceptRecord(void){
        cout<<"Enter num1: ";
        cin>>this->num1;
        cout<<"Enter num2: ";
        cin>>this->num2;
    }
    Complex sum(Complex temp){
        Complex sum;
        sum.num1 = this->num1 + temp.num1;
        sum.num2 = this->num2 + temp.num2;
        return sum;
    }

};

int main() {
    Complex c1, c2, c3;
    c1.acceptRecord();
    c2.acceptRecord();
    c3 = c1.sum(c2);
    c3.printRecord();
    return 0;
}