#include<iostream>
using namespace std;

class number
{
    private:
        static int count;

    public:

        number()                       //default constructor
        {
            count++;
            cout<<"constructor executed !! for object-"<<count<<endl;
        }

        ~number()                     //destructor
        {
            cout<<"destructor executed !! for object-"<<count<<endl;
            count--;
        }

};

int number :: count = 0 ;

int main()
{

    cout<<"---In main loop---"<<endl;
    number n1; 
 
    { 
        // this is called as block 
        // it will dissolve all the variables/declarations once exited
        //you can think of it like a function

        cout<<"---In Block code ---"<<endl;

        number n2,n3;

        cout<<"---out of Block code ---"<<endl;

    }

    cout<<"---Out of main loop---"<<endl;
    
    return 0;


}