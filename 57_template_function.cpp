#include<iostream>
using namespace std;

template <typename t1 , typename t2>
float avg(t1 x,t2 y)
{
    return (x+y)/2;
}

int main()
{
    float result = avg(3.8,4.7);
    cout<<"result = "<<result<<endl;
    
    return 0;


}