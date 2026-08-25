#include<iostream>
using namespace std;
namespace na
{
   int num1 = 20;
   namespace nb
   {
    int num1= 30;
   }
}
 int num1 = 10;

int main() {
   
    cout << "Global num1: " << num1 << endl;
    cout << "Namespace na num1: " << na::num1 << endl;
    cout << "Namespace nb num1: " << na::nb::num1 << endl;

    return 0;  
}