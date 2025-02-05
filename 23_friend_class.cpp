#include<iostream>
using namespace std;

//forward declaration to avoid jargon 
class complex;


class temp
{
    private:
        int k;
    public:
        complex sumcomplex(complex o1,complex o2);
};

class complex
{
    private:
        int a,b;
    public:
        void setvalue(int x , int y);
        void printdata();
        friend class temp;
        
};



complex temp :: sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a ;
    o3.b = o1.b + o2.b ;

    return o3;
}

void complex :: setvalue(int x , int y)
{
    a=x;
    b=y;
}

void complex :: printdata()
{
    cout<<"\ncomplex number : "<<a<<" + i"<<b<<endl;
}


int main()
{
    complex c1,c2,c3;
    temp t1;

    c1.setvalue(1,1);
    c2.setvalue(2,2);

    c3 = t1.sumcomplex(c1,c2);
    c3.printdata();

    
    return 0;


}