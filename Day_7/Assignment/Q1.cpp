#include<iostream>
using namespace std;

int menuList()
{
    cout<<"1.Add Book"<<endl;
    cout<<"2.Add Tape"<<endl;

    int choice;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    return choice;
}

class Product
{
    private:
    int id;
    string title;
    protected:
    float price;
    float total;
    public:
    Product (void) : id(0), title(""), price(0.0), total(0.0)
    { }
    Product (int id, string title) : id(id), title(title), price(price)
    { }

    
    virtual void printRecord( )
    {
        cout<<"ID: "<<id<<"  ";
        cout<<"Title: "<<title<<"  ";
        cout<<"Price: "<<price<<"  ";
    }

    virtual void acceptRecord( )
    {
        cout<<"Id: ";
        cin>>id;
        cout<<"Title: ";
        cin>>title;
        cout<<"Price: ";
        cin>>price;
    }

    virtual float totalPrice() = 0;
};

class Book : public Product
{
    private:
    string author;
    public:
    Book (void) : author("")
    { }
    Book (string author, float price) : author(author)
    { }


    void printRecord()
    {
        this->Product::printRecord();
        cout<<"Author: "<<author<<endl;
    }

    void acceptRecord()
    {
        this->Product::acceptRecord();
        cout<<"Author: ";
        cin>>author;
    }

    float totalPrice()
    {
       float discount = price - (price * 0.1);
       this->total = discount;
       return total;
    }
};


class Tape : public Product
{
    private:
    string artist;
    public:
    Tape (void) : artist("")
    { }
    Tape (string artist, float price) : artist(artist)
    { }

    void printRecord()
    {
        this->Product::printRecord();
        cout<<"Artist: "<<artist<<endl;
    }

    void acceptRecord()
    {
        this->Product::acceptRecord();
        cout<<"Artist: ";
        cin>>artist;
    }

    float totalPrice()
    {
       float discount = price - (price * 0.05);
       this->total = discount;
       return total;
    }
};


int main()
{
    Product *arr[3];
    int index = 0;
    float total=0;

        while (index<3)
        {
            int choice = menuList();
            switch (choice)
            {
            case 1:
            {
                if (index < 3)
                {
                    arr[index] = new Book();
                    arr[index]->acceptRecord();
                    index++;
                }
            }
            break;
            case 2:
            {
                if (index < 3)
                {
                    arr[index] = new Tape();
                    arr[index]->acceptRecord();
                    index++;
                }
            }
            break;
            }
        }

    for (int i = 0; i < 3; i++)
    {
        arr[i]->printRecord();
    }
    for (int i = 0; i < 3; i++)
    {
        total += arr[i]->totalPrice();
    }
    cout<<"Total: "<<total;

    for(int index = 0; index <3; index++)
    {
        delete arr[index];
        arr[index]=NULL;
    }

    return 0;
}