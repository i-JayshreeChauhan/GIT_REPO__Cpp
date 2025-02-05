#include<iostream>
using namespace std;

class Employee
{
    private:
        int ID;
        static int Emp_count;

    public:
        void getEmpID();
        void display_Emp_data();


};

int Employee :: Emp_count ;      // by default initialized to 0 when first object gets created
// int Employee :: Emp_count = 10;  //----we can start it from different number same as done here

void Employee :: getEmpID()
{
    cout<<"Enter Employee ID : ";
    cin>>ID;

    Emp_count++;

}

void Employee :: display_Emp_data()
{

    cout<<"Employee ID : "<< ID <<endl;
    cout<<"Total Employee : "<<Emp_count<<endl;

}


int main()
{
    Employee e1,e2,e3;

    e1.getEmpID();
    e2.getEmpID();
    e3.getEmpID();

    e1.display_Emp_data();   // or e2.display_Emp_data()  or e3.display_Emp_data()

    
    return 0;


}