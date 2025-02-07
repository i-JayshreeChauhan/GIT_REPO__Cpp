#include<iostream>
using namespace std;

/*

                             in public derivation          in private derivation           in protected derivation
    -------------------------------------------------------------------------------------------------------------------
    private members             not inherited                  not inherited                     not inherited
    protected members           stays protected                becomes private                   stays protected
    public members              becomes public                 becomes private                   becomes protected   
    
    *** VERY IMPORTANT ***


    note : protected (access specifier) work same as private (except private members cannot be inherited , protected members can)

*/

class base
{
    protected:
        int pro;
    private:
        int pri;
    public:
        int pub;

        base()  //default constructor
        {
            pro=0;
            pri=0;
            pub=0;
        }    

        base(int p1,int p2,int p3)
        {
            pro=p1;
            pri=p2;
            pub=p3;
        }

        void displaydata()
        {
            cout<<"the value of pro = "<<pro<<"  pri = "<<pri<<"  pub = "<<pub<<endl;
        }


};


class derived1 : private base       // or "class derived1 : base"
{
    public:
        void setvalues(int a , int b )
        {
            pro=a;
            //pri=b;    //inaccessible // will throw error
            pub=b;
        }

        void call_display_data()
        {
            displaydata();
        }
};


class derived2 : protected base
{

    public:
        void setvalues(int a , int b)
        {
            pro=a;
            //pri=b;    //inaccessible // will throw error
            pub=b;
        }

        void call_display_data()
        {
            displaydata();
        }

};


class derived3 : public base
{

    public:
        void setvalues(int a , int b)
        {
            pro=a;
            //pri=b;    //inaccessible // will throw error
            pub=b;
        }

};





int main()
{

    base b1(1,2,3);
    b1.displaydata();

    derived1 d1;
    derived2 d2;
    derived3 d3;

    // Note : when derivative class uses base class (it runs default constructor of base --hence you will see pro value becoming 0
    // if you change it to some other value (value of pro in base class' default constructor)it will be visible)

    d1.setvalues(10,10);
    d1.call_display_data();    //cant call display data directly as it becomes private

    d2.setvalues(20,20);
    d2.call_display_data();     //cant call display data directly as it becomes protected

    d3.setvalues(30,30);
    d3.displaydata();           //can call display data directly as it becomes public
    
    return 0;


}