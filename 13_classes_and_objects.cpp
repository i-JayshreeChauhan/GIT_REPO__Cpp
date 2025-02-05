#include<iostream>
using namespace std;


//------- Method 1 to define class 

class Employee
{
    private:
        int salary,empID;
    public:
        int dept=0;
        void setData(int sal,int ID);
        void printData(); 

};

//-------------- Method 2 to define class as well as its objects

/*
class Employee
{
    private:
        int salary,empID;
    public:
        int dept=0;
        void setData(int sal,int ID);
        void printData(); 

} Ep1 , Ep2 ;

*/

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