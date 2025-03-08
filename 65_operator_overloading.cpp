#include<iostream>
using namespace std;

class complex
{
    protected:
        int real,img;
    public:
        complex(){}
        complex(int a, int b)
        {
            real=a;
            img=b;
        }

        void display()
        {
            cout<<"value : "<<real<<" + "<<img<<"i"<<endl;
        }

        complex operator +(complex c)                       // '+' operator overloading
        {
            complex temp;
            temp.real = real + c.real;            
            temp.img = img + c.img;

            return temp;
        }


        // Prefix increment     
        void operator++() 
        {
            real++;
            img++;
        }

        // Postfix increment 
        void operator++(int)            //The int parameter is a dummy — the compiler uses it to differentiate the postfix from prefix versions.
        {
            real++;
            img++;
        }

};

int main()
{

    complex c1(1,1);
    complex c2(2,2);
    complex c3(3,3);
    complex c4;

    c4=c1+c2+c3;           //first it will execute c2+c3 and then result of c2+c3 and c1

    c4.display();



    c4++;     //postfix 
    c4.display();


        
    ++c4;     //prefix 
    c4.display();
    
    
    return 0;


}