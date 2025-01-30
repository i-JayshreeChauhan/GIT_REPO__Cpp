#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int a=17,b=234,c=1345;

    cout<<"value of a = "<<a<<endl;
    cout<<"value of b = "<<b<<endl;
    cout<<"value of c = "<<c<<endl;
    cout<<endl;

    cout<<"value of a = "<<setw(4)<<a<<endl;
    cout<<"value of b = "<<setw(4)<<b<<endl;
    cout<<"value of c = "<<setw(4)<<c<<endl;
    
    return 0;


}