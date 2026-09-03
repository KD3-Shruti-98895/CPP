#include<iostream>
using namespace std;

class InvalidTimeException
{
    private:
    string invalidField;
    int invalidValue;
    public:
    InvalidTimeException (string invalidField, int invalidValue) 
    {
        this->invalidField = invalidField;
        this->invalidValue = invalidValue;
    }
    string getInvalidField(void)
    {
        return this->invalidField;
    }
    int getInvalidValue(void)
    {
        return this->invalidValue;
    }

};
class Time 
{
    private:
    int hr;
    int min;
    int sec;
    public:
      void setHrs(int hr)
      {
        if(hr < 0 || hr >24)
            throw InvalidTimeException("invalid input",hr);
        this->hr=hr;
      }
      void setMin(int min)
      {
        if(min < 0 || min > 60)
           throw InvalidTimeException("min",min);
        this->min = min;
      }
      void setSec(int sec)
      {
        if(sec<0 || sec>60)
           throw InvalidTimeException("sec",sec);
        this->sec= sec;
      }
      void printRecord(void)
      {
        cout<<hr<<":"<<min<<":"<<sec;
      }
};

int main()
{
    try
    {
        Time t1;
        t1.setHrs(0);
        t1.setMin(20);
        t1.setSec(4);

        t1.printRecord();
    }

    catch (InvalidTimeException ex)
    {
        cout<<"Field : "<<ex.getInvalidField()<<endl;
        cout<<"Value : "<<ex.getInvalidValue()<<endl;
    }
    catch(...){ }
    return 0;
    
}