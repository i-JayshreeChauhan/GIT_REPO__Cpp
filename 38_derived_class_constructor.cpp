#include<iostream>
using namespace std;

/*
sequence of execution of constructors 
---------------------------------------

case 1 :
class B : public class A  
    --> constructor A then constructor B


case 2 :
class C : public A , public B
    --> constructor A then constructor B and then C


case 3:
class C : public B , public A
    --> constructor B then constructor A and then C


case 4: 
class C : public B , virtual public A
    --> constructor A then constructor B and then C


NOTE :: VIRUTAL class has the highest priority


New method to pass arguments to base class's constructor is shown below


 */

class base1
{
    private:
        int b1;
    public:
        base1(int a)
        {
            b1=a;
            cout<<"Executed constructor of base1"<<endl;
        }

};

class base2
{
    private:
        int b2;
    public:
        base2(int a)
        {
            b2=a;
            cout<<"Executed constructor of base2"<<endl;        }

};

class derived1 : public base1 ,  public base2       //base 1 will be executed first , then base 2 & then derived
{ 
    private:
        int d1;
    public:
        derived1(int a , int b , int c) : base1(a) , base2(b)
        {
            d1=c;
            cout<<"Executed constructor of derived"<<endl; 
        }

};


int main()
{

    derived1 dd1(1,2,3);

    return 0;


}