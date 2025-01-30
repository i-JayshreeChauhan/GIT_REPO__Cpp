#include<iostream>
using namespace std;

float prod(int a , float factor=1.2)     //1.2 is defauklt factor is nothing is passed
{
    return a*factor;
}

int main()
{

    int a=10;
    cout<<"value is = "<<prod(a)<<endl;   //passing only one argument instead of 2
    cout<<"value is = "<<prod(a,2)<<endl;   //passing only two arguments
    return 0;


}