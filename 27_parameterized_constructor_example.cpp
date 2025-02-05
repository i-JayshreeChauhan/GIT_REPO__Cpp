//
// calculate the distance between two points

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class point 
{
    private:
        int x,y;
    public:
        point(int a , int b);    //parameterized constructor
        void printdata()
        {
            cout<<"coordinates of point ( "<<x<<" , "<<y<<" ) "<<endl;
        }

        friend float distance_bet_two_points(point p1,point p2);

};

point :: point(int a , int b)
{
    x=a;
    y=b;
}

float distance_bet_two_points(point p1,point p2)
{
    int s1 , s2 , s3 , s4 , s5 ;
    float s6 ;

    s1 = p1.x - p2.x ; 
    s2 = p1.y - p2.y ;
    s3 = pow(s1,2);
    s4 = pow(s2,2);
    s5 = s3 + s4 ;
    s6 = sqrt(s5);

    return s6;
}

int main()
{

    point pp1(3,3) ;
    point pp2(2,2) ;
    float dist=0;
    dist = distance_bet_two_points(pp1,pp2);

    cout<<"distance between pp1 and pp2 is "<< fixed << setprecision(3) <<dist<<endl;
    
    
    return 0;


}