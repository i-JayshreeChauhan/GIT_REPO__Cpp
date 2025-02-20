#include<iostream>
using namespace std;

class complex
{
    int real,imaginary;
    public:
        void setdata(int a , int b)
        {
            real = a;
            imaginary = b;
        }

        void printdata()
        {
            cout<<"The value = "<<real<<" + "<<imaginary<<"i"<<endl;
        }
};

int main()
{

    //------------------ General method / normal method
    /*
    complex c1;
    c1.setdata(1,2);
    c1.printdata();
    */

    //----------------- pointer method 1
    /*
    complex c1;
    complex *ptr=&c1;
    (*ptr).setdata(4,5);     //need to use () bracket as precedency of . is higher than *
    (*ptr).printdata();
    */

    //---------------- pointer method 2
    complex *ptr = new (nothrow) complex;

    if(!ptr)
    {
        cout<<"memory allocation failed"<<endl;
    }
    else
    {
        /*
        (*ptr).setdata(6,3);     //need to use () bracket as precedency of . is higher than *
        (*ptr).printdata();
        
        or
        
        */

        ptr->setdata(7,8);
        ptr->printdata();
        delete ptr;

    }
    
    return 0;


}