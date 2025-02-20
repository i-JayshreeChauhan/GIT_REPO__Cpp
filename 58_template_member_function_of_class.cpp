#include<iostream>
using namespace std;

template <class t1, class t2>
class test
{
    public:
        int a , b ;
        test(t1 x , t2 y)
        {
            a=x;
            b=y;
        }

        void sum();

};

template <class t1 , class t2>
void test <t1,t2> ::  sum()
{
    cout << "result = "<< a+b <<endl;
}


int main()
{

    test <int,int> t1(2,10);
    t1.sum();
    
    return 0;


}