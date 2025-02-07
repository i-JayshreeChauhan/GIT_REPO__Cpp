#include<iostream>
#include<iomanip>
using namespace std;


// Example of multi level inheritance

class student
{
    protected:
        int roll_number;
    public:
        void set_rollnumber(int a)
        {
            roll_number = a;
        }

        void display_roll_num()
        {
            cout<<"roll number : "<<roll_number<<endl;
        }
};

class marks : public student
{
    protected:
        int physics , chem , maths;
    public:
        void set_marks(int a , int b , int c)
        {
            physics = a;
            chem = b;
            maths = c;
        }

        void display_marks()
        {
            
            cout<<"Physics : "<<physics<<endl;
            cout<<"Maths : "<<maths<<endl;
            cout<<"Chemistry : "<<chem<<endl;
        }
};

class result : public marks
{
    private:
        float percentage;
    public:
        void display_result()
        {
           
            cout<<"-----Marks of roll number : "<<roll_number<<"-----"<<endl;
            cout<<"Physics : "<<physics<<endl;
            cout<<"Maths : "<<maths<<endl;
            cout<<"Chemistry : "<<chem<<endl;

            percentage = ((float)(physics+chem+maths)/3);

            cout<<"\nResult --> percentage : "<<fixed<<setprecision(2)<<percentage<<endl;
            if(percentage<=30)
            {
                cout<<"Roll number : "<<roll_number<<"   |  Result : Fail \n"<<endl;
            }
            else
            {
                cout<<"Roll number : "<<roll_number<<"   |  Result : Pass \n"<<endl;
            }
        }
};


int main()
{

    result jayshree,chitrang;

    jayshree.set_rollnumber(1);
    jayshree.set_marks(90,87,77);

    chitrang.set_rollnumber(2);
    chitrang.set_marks(92,89,81);

    jayshree.display_result();
    chitrang.display_result();


    
    return 0;


}