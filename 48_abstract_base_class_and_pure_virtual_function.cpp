#include<iostream>
using namespace std;

//------ pure virtual function is a function defined in such a way in a base class , that you need to redefine it in its derived classes
// example is in base class

// an abstract class is a class which is used to generate derivative classes (it does not have its use on alone) (it is a design concept)
// example (a walk class in a game)--its surves no purpose alone (but used for inheritance)

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
 
        virtual void display()=0;    //pure virtual function  

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