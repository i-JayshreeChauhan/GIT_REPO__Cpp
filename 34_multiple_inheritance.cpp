#include<iostream>
using namespace std;

class base1
{
    protected:
        int base1int;
    public:
        void setval1(int a)
        {
            base1int = a;
        }
};


class base2
{
    protected:
        int base2int;
    public:
        void setval2(int a)
        {
            base2int = a;
        }
};

class derived : public base1 , public base2
{

    public:
        void display()
        {
            cout<<"value of base1int is = "<<base1int<<endl;
            cout<<"value of base1int is = "<<base2int<<endl;
            cout<<"value of sum is = "<<base2int+base1int<<endl;


        }

};


int main()
{
    derived d1;
    d1.setval1(34);
    d1.setval2(48);
    d1.display();
    
    return 0;


}