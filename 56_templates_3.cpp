#include<iostream>
using namespace std;


template <class t1=int,class t2=float>
class test
{
    public:
        t1 a;
        t2 b;
        test(t1 x,t2 y)
        {
            a=x;
            b=y;
            cout<<"value of a = "<<a<<endl<<"value of b = "<<b<<endl;
        }

};

int main()
{

    test <> tt1(4,10.2);

    test <float,int> tt2(3.4,2);
    
    return 0;


}