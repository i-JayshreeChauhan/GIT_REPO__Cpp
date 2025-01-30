#include<iostream>
using namespace std;

int c=45;

int main()
{

    int c=10;

    cout<<"value of C (LOCAL) is : " << c << "\n";
    cout<<"value of C (GLOBAL) is : " << ::c << "\n";
    
    return 0;


}