#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:

        complex(int x , int y)   //parameterized constructor
        {
            a=x;
            b=y;
        }

        complex(int x)  //parameterized constructor
        {
            a=x;
            b=3;
        }


        void printdata( )
        {
            cout<<"\ncomplex number : "<<a<<" + "<<b<<"i"<<endl;
        }

};



int main()
{


    complex c1(1,3);
    complex c2(5);

    c1.printdata();
    c2.printdata();

    return 0;


}