#include<iostream>
using namespace std;

class Array
{
    private:
    int arr[3];
    public:
    void acceptRecord( ){
        for(int i=0; i<3; i++){
            cout<<"Element: "<<endl;
            cin>>arr[i];
        }
    }
    void printRecord( ){
        for(int i=0; i<3; i++){
            cout<<arr[i]<<endl;
        }
    }
    ~Array(void)
    {
        cout<<"Destr..."<<endl;
    }
 
};

int main(){
    Array a1, a2;
    a1.acceptRecord();
    a1.printRecord();
    // a2.acceptRecord();
    // a2.printRecord();
}