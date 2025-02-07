#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class simplecalculator
{

    protected:
        int var1 , var2 ;
    public:
        void fetchInput();
        int sum();
        int subtract();
        int multiply();
        float divide();
        void display_result1();

};


void simplecalculator :: fetchInput( )
{
    cout<<"Enter 2 variables :"<<endl;
    cout<<"var1 : ";
    cin>>var1;
    cout<<"var2 : ";
    cin>>var2;
}

int simplecalculator :: sum()
{
    return var1+var2;
}

int simplecalculator :: subtract()
{
    return var1-var2;
}


int simplecalculator :: multiply()
{
    return var1*var2;
}


float simplecalculator :: divide()
{
    float a;
    a = ( (float)var1/(float)var2 ) ;
    return a;
}

void simplecalculator :: display_result1()
{
    cout<<"\n---------- results (simple_calculator) -----------"<<endl<<endl;
    cout<<"sum : var1 + var2 = "<< sum() <<endl;
    cout<<"subtract : var1 - var2 = "<< subtract() <<endl;
    cout<<"multiply : var1 * var2 = "<< multiply() <<endl;
    cout<<"divide : var1 / var2 = "<<fixed<<setprecision(2)<< divide() <<endl;
}


class scientificcalculator : public simplecalculator
{
    protected:
        int r1,r2;
        float rr1,rr2;

    public:
        int square(int a);
        float squareroot(int a);
        float log_of_10(int a);
        int factorial(int a);
       
        void display_result2();

};

int scientificcalculator :: square(int a)
{   
    return ((int)pow(a,2));
}

float scientificcalculator :: squareroot(int a)
{   
    return sqrt(a);
}

float scientificcalculator :: log_of_10(int a)
{   
    return log10(a);
}

int scientificcalculator :: factorial(int a)
{
     if(a==1 || a==0)
     {
        return 1;
     }
     else
     {
        int fnm1,f;
        fnm1 = factorial(a-1);
        f= fnm1 * a ;

        return f;
     }
}

void scientificcalculator :: display_result2()
{
    cout<<"\n---------- results (scientific_calculator) -----------"<<endl<<endl;
    cout<<"square (var1)^2 = "<< square(var1) <<endl;
    cout<<"square (var2)^2 = "<< square(var2) <<endl;

    cout<<"squareroot : squrt(var1) "<<fixed<<setprecision(2)<< squareroot(var1) <<endl;
    cout<<"squareroot : squrt(var2) "<<fixed<<setprecision(2)<< squareroot(var2) <<endl;

    cout<<"log to the base 10 : log10(var1) = "<<fixed<<setprecision(2)<< log_of_10(var1) <<endl;
    cout<<"log to the base 10 : log10(var2) = "<<fixed<<setprecision(2)<< log_of_10(var2) <<endl;

    cout<<"factorial : var1 ! = "<< factorial(var1) <<endl;
    cout<<"factorial : var2 ! = "<< factorial(var2) <<endl;  
}

class hybridcalculator : public scientificcalculator
{
    
};



int main()
{
    
    hybridcalculator h1;
    h1.fetchInput();

    h1.display_result1();
    h1.display_result2();

    
    return 0;


}