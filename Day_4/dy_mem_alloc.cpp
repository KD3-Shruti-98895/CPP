#include<iostream>
using namespace std;


int main()
{
   int *ptr = new int[3]  ;

    for(int n=0; n<3; n++){
        cout<<"Enter val: "<<endl;
        cin>>ptr[n]; 
    }
    for(int j=0; j<3; j++){
        cout<<ptr[j]<<endl;
    }
    
    for(int i=0; i<3; i++){
        delete[] ptr;
        ptr = NULL;
    }

    return 0;

}