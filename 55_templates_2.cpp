#include<iostream>
using namespace std;

template <class t1,class t2>
class cl
{
    public:
        t1 val;
        t2 val1;

        cl(t1 x,t2 y)
        {
            val=x;
            val1=y;
            cout<<"val = "<<val<<endl<<"val1 = "<<val1<<endl;
        }

};

int main()
{

    cl <int,float> c1(4,5.6);
    return 0;


}