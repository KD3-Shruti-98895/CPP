#include<iostream>
using namespace std;

void sum(int a, int b, int c) {
  int res = a+b+c;
  cout << "Sum of Three Numbers: " << res << endl;
}
 
void sum(int a, int b) {
    int res = a+b;
    cout << "Sum of two numbers: " << res << endl;
}

void sum(int a, float b){
    float res = a + b;
    cout << "Sum of float and int:" << res << endl;
}

int main() {
    cout << " Overloading fucntions in C++" << endl;
    sum(10,20.2f);
    sum(20,10,40);
}