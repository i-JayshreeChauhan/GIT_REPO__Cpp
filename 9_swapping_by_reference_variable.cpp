#include<iostream>
using namespace std;

void swap(int &a ,int &b);
int & updswap(int &a , int &b);    //return type --> reference variable 

int main()
{
    int a=10,b=20;


    cout<<"----------------Swap function----------------\n";

    cout<<"value of a =  "<<a<<"\nvalue of b = "<<b<<endl;
    cout<<endl;
    swap(a,b);
    cout<<"value of a =  "<<a<<"\nvalue of b = "<<b<<endl;
    cout<<endl;


    cout<<"----------------Updated Swap function----------------\n";

    cout<<"value of a =  "<<a<<"\nvalue of b = "<<b<<endl;
    cout<<endl;
    updswap(a,b) = 56 ;
    cout<<"value of a =  "<<a<<"\nvalue of b = "<<b<<endl;
    cout<<endl;

    return 0;


}

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

int & updswap(int &a,int &b)   //return type --> reference variable 
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    return a;

}
