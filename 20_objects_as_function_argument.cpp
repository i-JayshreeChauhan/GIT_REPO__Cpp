#include<iostream>
using namespace std;

class complexNumber
{
    private:
        int a;
        int b;

    public:
        void setdata(int x , int y);
        void printdata();
        void sum_of_complexNum(complexNumber c1,complexNumber c2);
};

void complexNumber :: setdata(int x,int y)
{
    a=x;
    b=y;
}

void complexNumber :: printdata()
{
    cout<<"complex number : "<<a<<" + i "<<b<<endl;
} 

void complexNumber :: sum_of_complexNum(complexNumber c1,complexNumber c2)
{
    a = c1.a + c2.a; 
    b = c1.b + c2.b;
}

int main()
{
    complexNumber o1,o2,o3;

    o1.setdata(1,1);
    o2.setdata(2,2);

    o3.sum_of_complexNum(o1,o2);
    o3.printdata();
    
    return 0;

}