#include<iostream>
using namespace std;

class Cylinder
{
    private:
    double radius;
    double height;
    static double PI;
    public:
    Cylinder(void) : radius(0), height(0)
    {  }
    Cylinder(double radius, double height): radius(radius) , height(height)
    {  }
    void getRadius(){
        cout<<"Radius: "<<radius<<endl;
    }
    void getHeight(){
        cout<<"Height: "<<height<<endl;
    }
    void setRadius(double radius){
        this->radius = radius; 
    }
    void setHeight(double height){
        this->height = height;
    }
    double calculateVolume(){
        double vol = PI*radius*radius*height;
        cout<<"Volume: "<<vol<<endl;
        return vol;
    }
};

double Cylinder :: PI = 3.14 ;

int main()
{
    Cylinder c1;
    c1.getRadius();
    c1.getHeight();
    c1.setRadius(5);
    c1.setHeight(5);
    c1.calculateVolume();
    Cylinder c2(2.5, 5);
    c2.getRadius();
    c2.getHeight();
    c2.calculateVolume();

    return 0;

}