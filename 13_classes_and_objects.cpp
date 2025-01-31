#include<iostream>
using namespace std;

class Employee
{
    private:
        int salary,empID;
    public:
        int dept=0;
        void setData(int sal,int ID);
        void printData(); 

};

void Employee :: setData(int sal,int ID)
{
    salary = sal;
    empID = ID;
}

void Employee :: printData()
{
    cout<<"Employee Dept : "<<dept<<endl;
    cout<<"Employee ID : "<<empID<<endl;
    cout<<"Employee Salary : "<<salary<<endl;
    
}


int main()
{
    Employee E1;
    E1.dept = 1;
    E1.setData(52400,116);
    E1.printData();
    
    return 0;


}