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
    
    //----------object array + pointer arithmatic

    complex *ptr = new (nothrow) complex[3];    //array of 3 objects

    if(!ptr)
    {
        cout<<"memory allocation failed !!"<<endl;
    }
    else
    {

        /*
        ptr->setdata(1,1);
        (ptr+1)->setdata(2,2);
        (ptr+2)->setdata(3,3);

        ptr->printdata();
        (ptr+1)->printdata();
        (ptr+2)->printdata();

        delete[] ptr;


        or

        */


        (*ptr).setdata(1,1);
        (*(ptr+1)).setdata(2,2);
        (*(ptr+2)).setdata(3,3);

        (*ptr).printdata();
        (*(ptr+1)).printdata();
        (*(ptr+2)).printdata();

        delete[] ptr;

    }

    return 0;
}