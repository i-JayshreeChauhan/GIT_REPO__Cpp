#include<iostream>
using namespace std;

class student
{   
    public:
        int rollno;
        int theorymarks;
        int practicalmarks;
        student(int a)
        {
            rollno=a;
        }
        virtual void display()
        {
            cout<<"Roll number : "<<rollno<<endl;
        }

};

class theory : public student
{
    public:
        theory(int r,int t) : student(r)
        {
            theorymarks = t;
        }

        void display()
        {
            cout<<"Roll number : "<<rollno<<" theory marks = "<<theorymarks<<endl; 
        }
};

class practical : public student
{
    public:
        practical(int r,int p) : student(r)
        {
            practicalmarks = p;
        }

        void display()
        {
            cout<<"Roll number : "<<rollno<<" Practical marks = "<<practicalmarks<<endl; 
        }
};


int main()
{

    
    theory t1(11,89);
    student *ptr = &t1;

    ptr->display();

    
    return 0;


}