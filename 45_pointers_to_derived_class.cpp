#include<iostream>
using namespace std;

class base
{
    public:
        int var_base;
        void display()
        {
            cout<<"value of var_base is = "<<var_base<<endl;
        }

};

class derived : public base
{
    public:
        int var_derived;
        void display()
        {
            cout<<"value of var_base is = "<<var_base<<endl;
            cout<<"value of var_derived is = "<<var_derived<<endl;
        }
};

int main()
{

    base b1;
    base *base_ptr;

    derived d1;
    base_ptr = &d1;    //pointing to derived class object using a base class type pointer variable


    //Note : this pointer can only use variable which are inherited to this derived object (from base class (whose pointer it is))
    base_ptr->var_base=33;
    //base_ptr->var_derived = 35 //wrong
    base_ptr->display();
    
    return 0;


}