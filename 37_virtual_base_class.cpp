#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_number;
    public:
        void set_roll_num(int a)
        {
            roll_number=a;
        }
};


class theory : virtual public Student
{
    protected:
        int marks1;
    public:
        void set_marks1(int a)
        {
            marks1=a;
        }
};

class practical : virtual public Student
{
    protected:
        int marks2;
    public:
        void set_marks2(int a)
        {
            marks2=a;
        }
};

class result : public theory , public practical
{
    public:
        void display()
        {
            cout<<"Roll number : "<< roll_number << "\nTotal_marks : "<< marks1 + marks2<<endl;
        }
};


int main()
{

    result r1;
    r1.set_roll_num(10);
    r1.set_marks1(78);
    r1.set_marks2(89);
    r1.display();
    
    return 0;


}