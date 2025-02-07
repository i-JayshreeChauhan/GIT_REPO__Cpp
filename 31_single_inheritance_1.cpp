#include<iostream>
#include<iomanip>
using namespace std;

/*

Notes on Inheritance

1- syntax

    class {{derived class Name}} : {{visibility mode}} {{base class Name}}
    {
    };

2- visibility mode (private) : means 'public' members of base class will be available to deriverd class as 'private'
3- visibility mode (public) : means 'public' members of base class will be available to deriverd class as 'public'
4- if no visibility mode is mentioned it is considered as 'private' visibility by default
5- private members of base class cannot be inherited




 */



class Employee
{

    public:
        int ID;
        float Salary;

        Employee(){}

        Employee(int empid)
        {
            ID=empid;
            Salary=100.0;
        }

        void printdata()
        {
            cout<<"Employee ID : "<<ID<<" and Salary : "<<fixed<<setprecision(2)<<Salary<<endl;
        }
};

class Programmer : Employee    //defined private visibility --> Employee class's public members will be inherited as private
{
    public:
        int programming_lang;

        Programmer(){}    //default constructor

        Programmer(int empid)
        {
            ID = empid;     //allowed access of id (public member of Employee class)
            Salary = 200.0; //allowed access of Salary (public member of Employee class)
        }

        void call()
        {
            printdata();    //as printdata function is private to this class (cant access directly in main - hence did this)
        }

   
};


class Manager : public Employee
{
    
    public:

        Manager(){}  //default constructor

        Manager(int empid , float sal=300.0)  //parameterized constructor
        {
            ID = empid;
            Salary = sal;
        }

};

int main()
{

    Employee e1(1),e2(2);
    e1.printdata();
    e2.printdata();

    Programmer p1(3);  
    p1.call();       //here to access printdata (you need to execute call function)


    Manager m1(4,500.0);
    m1.printdata();   //this can access printdata as this class has inherited members of employee class as public



    return 0;
}