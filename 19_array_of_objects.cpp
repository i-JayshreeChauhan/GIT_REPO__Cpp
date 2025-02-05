#include<iostream>
#include<string>
using namespace std;

class Employee
{

    private:
        int ID;
        int salary;
        string name;
        
    public:
        void get_emp_data();
        void print_emp_data();

};

void Employee :: get_emp_data()
{

    cout<<"------Enter Employee data : "<<endl;

    cout<<"Emp ID : ";
    cin>>ID;

    cout<<endl;

    cout<<"Emp Name : ";
    cin>>name;

    cout<<endl;

    cout<<"Emp Salary : ";
    cin>>salary;

    cout<<endl;

}

void Employee :: print_emp_data()
{
    cout<<endl;
    cout<<"Emp Name : "<<name<<endl;
    cout<<"Emp ID : "<<ID<<endl;
    cout<<"Emp Salary : "<<salary<<endl;
    cout<<endl;
}

int main()
{

    Employee e[3];

    for(int i=0;i<3;i++)
    {
        e[i].get_emp_data();
    }

    for(int i=0;i<3;i++)
    {
        e[i].print_emp_data();
    }
       
    return 0;


}