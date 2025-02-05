#include<iostream>
using namespace std;


/* when there is no copy constructor - still compiler copyies the data as it supplies it default with every class */
/* u can check it by commenting copy constructor code -- still you will get the same op as when copy constructor was defined */
/* when there no copy constructor exist - compiler supplies it own copy constructor */

class number
{
    private:
        int a,b;
    public:
        number(){};    
         
        number(int x,int y)
        {
            a=x;
            b=y;
        }


         number(number &obj)     // passed obj of number class  //this is called copy constructor
         {
             cout<<"\nCopy constructor executed"<<endl;
             a=obj.a;
             b=obj.b;
         }

        void printdata()
        {
            cout<<"\nvalue of a = "<<a<<" and b = "<<b<<endl;
        }
};

int main()
{

    number n1(4,4),n2(5,5),n4;
    number n3(n1);   //copy constructor

    n1.printdata();
    n2.printdata();
    n3.printdata();   //n3--> a having same value as n1--> a

    n4=n2;    //copy constructor (however even when copy constructor code is defined by you, it uses the comiler's copy constructor method)
    
    n4.printdata();
    return 0;


}