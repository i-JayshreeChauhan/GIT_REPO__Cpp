#include<iostream>
using namespace std;

class base1
{
    public:
        void greet()
        {
            cout<<"How are you??"<<endl;
        }
};

class base2
{
    public:
        void greet()
        {
            cout<<"Kaise ho??"<<endl;
        }
};

class derived : public base1, public base2
{
    public:
        void greet()                //resolving ambiguity
        {
            base2 :: greet();       //by calling greet of base2
        }
};


int main()
{
    base1 b1;
    base2 b2;

    b1.greet();
    b2.greet();

    derived d1;
    d1.greet();
    
    return 0;


}