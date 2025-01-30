#include<iostream>

using namespace std;


//inline function replaces function call with function data (to reduce time taken every time calling them)

inline int product (int a , int b)
{
    return a*b;
}

int main()
{

    int a=10,b=20;

    for(int i=0;i<10;i++)
    {

        cout<<"the product of "<<a<<" and "<<b<<" is = "<<product(a,b)<<endl;    //here it replaces product function call with function data
    }


    return 0;


}