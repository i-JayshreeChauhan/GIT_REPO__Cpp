#include<iostream>
#include<cstring>
using namespace std;

class animal
{

    private:
        int legs=0;
        

        char colour[10]="Black";
        char *c_ptr=colour;

        char type[15]="herbivourous";
        char *t_ptr=type;

    public:
        void set_animal_data(int lg, char* col,char* tp );
        void print_data();
};


void animal :: set_animal_data(int lg, char* col,char* tp )
{
    legs = lg;
    strcpy(t_ptr,tp);
    strcpy(c_ptr,col);

}

void animal :: print_data()
{
    cout<<endl;
    cout<<"----------Animal data----------"<<endl;
    cout<<"legs : "<<legs<<endl;
    cout<<"body colour : "<<colour<<endl;
    cout<<"Animal Type : "<<type<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<endl;
}

int main()
{

    animal dog;
    char acolour[10]="off-white";
    char atype[15]="omnivorous";
    
    dog.set_animal_data(4,acolour,atype);
    dog.print_data();

  

    
    return 0;


}