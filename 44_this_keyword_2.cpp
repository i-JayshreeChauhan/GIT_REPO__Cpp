#include<iostream>
using namespace std;

class base
{
        int a;
    public:
        base & setdata(int a)
        {

            this->a = a;    //'this' is a keyword which is a pointer the object being invoked //hence we can access members of object using 'this' keyword
            return *this;   //returns object being invoked
            
        }

        void printdata()
        {
            cout<<"value is = "<<a;
        }
};

int main()
{

    base A;
    A.setdata(4).printdata();
    
    return 0;


}