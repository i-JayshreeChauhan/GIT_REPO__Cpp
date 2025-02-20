#include<iostream>
using namespace std;

class base
{
        int a;
    public:
        void setdata(int a)
        {
            //a=a;            //if you run this result will show some garbage as the function considers it a of the 
                            //function not of the class (as local variables has highest priority)

            this->a = a;    //'this' is a keyword which is a pointer the object being invoked //hence we can access members of object using 'this' keyword
            
        }

        void printdata()
        {
            cout<<"value is = "<<a;
        }
};

int main()
{

    base A;
    A.setdata(10);
    A.printdata();
    
    return 0;


}