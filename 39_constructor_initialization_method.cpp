#include<iostream>
using namespace std;

class test
{
    private:
        int a;
        int b;
    public:

        /*

        //method 1

            test(int x,int y)     
            {
                a=x;
                b=y;
            }
        
        */

            //test(int x,int y) : a(x) , b(y)               //works
            //test(int x,int y) : a(x+2) , b(y+2)           //works
            //test(int x,int y) : a(x*2) , b(y*2)           //works
            //test(int x,int y) : a(x) , b(x+y)             //works
            //test(int x,int y) : a(x+y) , b(y)             //works
            //test(int x,int y) : a(y) , b(x)               //works
            test(int x,int y) : b(y) ,  a(x)                //works
            {
                cout<<"constructor executed"<<endl;
                cout<<"value of a = "<<a<<endl<<
                      "value of b = "<<b<<endl;
            }



};


int main()
{

    test t1(2,3);

    return 0;


}