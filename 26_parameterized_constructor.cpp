#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:

        complex(int x , int y);   //parameterized constructor
        void printdata( )
        {
            cout<<"\ncomplex number : "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex :: complex(int x , int y)    //parameterized constructor 
{
    a=x;
    b=y;
}

int main()
{

    //implicit call of constructor
    complex c1(1,3);

    c1.printdata();

    //Explicit call of constructor
    complex c2 = complex(5,2);

    c2.printdata();

    return 0;


}