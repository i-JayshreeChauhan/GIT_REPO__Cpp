#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:
        //creating constructor
        //Constructor is a special member function with the same name as that of class.
        //It is used to initialize the objects of its class
        //It is automatically invoked(called/executed) whenever an object is created

        complex(void);   //constructor declaration  // no parameters are passed --> hence it is called Default constructor
        void printdata( )
        {
            cout<<"\ncomplex number : "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex :: complex(void)    //default constructor 
{
    a=10;
    b=3;
}

int main()
{
    complex c1;
    c1.printdata();
    return 0;


}