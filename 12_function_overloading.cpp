#include<iostream>
using namespace std;

//function overloading means using one functions/thing for multiple tasks
//one example of function overloading is 
//--------- let suppose you have function named as add (one having int arguments and one having string arguments)
//--------- when integers are passed , you want sum of both the numbers
//--------- when strings are passed , you want concatenated string as op

int sum (int a ,int b)
{
    return a+b;
}

int sum (int a ,int b,int c)
{
    return a+b+c;
}



int main()
{

    cout<<"sum of 3 and 6 is "<<sum(3,6)<<endl;            //this one will use sum function having two arguments
    cout<<"sum of 3 , 6 and 7 is "<<sum(3,6,7)<<endl;      //this one will use sum function having three arguments
    return 0;


}