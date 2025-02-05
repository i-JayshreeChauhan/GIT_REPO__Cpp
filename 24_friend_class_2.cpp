#include<iostream>
using namespace std;

/// IMP --> here we have used reference variable concept (as in reference classes)


//forward declaration
class Y;


class X
{
    private:
        int xval;
    public:
        void setval(int x)
        {
            xval=x;
        }

        void display()
        {
            cout<<"\nvalue of X class variable : "<<xval<<endl;
        }

        friend void exchangeval(X &x , Y &y);

};


class Y
{
    private:
        int yval;
    public:
        void setval(int y)
        {
            yval=y;
        }

        void display()
        {
            cout<<"value of Y class variable : "<<yval<<endl;
        }

        friend void exchangeval(X &x , Y &y);

};


void exchangeval(X &x , Y &y)    //using reference variables
{
    int temp;
     temp = x.xval;
     x.xval = y.yval;
     y.yval = temp;

}

int main()
{
    X x1;
    Y y1;


    
    x1.setval(5);
    y1.setval(10);

    cout<<"------before Exchange------";
    x1.display();
    y1.display();
    
    exchangeval(x1,y1);

    cout<<"------After Exchange------";
    x1.display();
    y1.display();
    
    return 0;


}