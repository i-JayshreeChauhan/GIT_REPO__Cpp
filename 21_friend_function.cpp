#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:
        void setvalue(int x,int y);
        void printdata();
        friend complex sum(complex o1,complex o2);   // you can define it in the private section also
};

void complex :: setvalue(int x,int y)
{
    a = x ;
    b = y ;
}

void complex :: printdata( )
{
    cout<<"\ncomplex number : "<<a<<" + i"<<b<<endl;
}


complex sum(complex o1,complex o2)   
{

    //this friend function cannot directly access private variables (it needs object)
    //ex. a=3;(wrong)    o2.a = 3 (right)

    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}



int main()
{
    complex c1,c2,c3;
    c1.setvalue(1,1);
    c2.setvalue(2,2);

    c3 = sum(c1,c2);
    c3.printdata();
    
    return 0;


}