
/*

Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h.
The default constructor of the class should initialize l, b,and h to 0.
The parameterized constructor Box(int length, int breadth, int height) should initialize Box's l,b and h to length, breadth and height.
The copy constructor Box (Box B) should set l,b and h to B's l,b and h, respectively.

Apart from the above, the class should have 4 functions:

-int getLength() - Return box's length
-int getBreadth() - Return box's breadth
-int getHeight() - Return box's height
-long long CalculateVolume() - Return the volume of the box


Overload the operator < for the class Box. Box A<  Box B if:

1- A.l < B.long
2- A.b < B.b and A.l == B.l
3- A.h < B.h and A.b == B.b and A.l==B.l

Overload operator << for the class Box().

If B is an object of class Box:

cout<<B should print B.l,B.b  and B.h on a single line separated by spaces.

For example,
-------------

Box b1;                     // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4);            // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	            // Should return 2
b2.getBreadth();            // Should return 3
b2.getheight();	            // Should return 4
b2.CalculateVolume();       // Should return 24
bool x = (b1 < b2);	        // Should return true based on the conditions given
cout<<b2;                   // Should print 2 3 4 in order.

Constraints
------------

0 <= l,b,h <= 10^5


Two boxes being compared using the < operator will not have all three dimensions equal.


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box
{
    private:

        int l,b,h;

    public:

        Box()     //default constructor
        {
            l=0;
            b=0;
            h=0;
        }


        Box(int x,int y,int z)   //parameterized constructor
        {
            l=x;
            b=y;
            h=z;
        }


        Box(Box &obj)     // passed obj of box class  //this is copy constructor
        {
            l=obj.l;
            b=obj.b;
            h=obj.h;            
        }


        int getLength()
        {
            return l;
        }

        int getBreadth()
        {
            return b;
        }


        int getheight()
        {
            return h;
        }

        long long CalculateVolume()
        {
            long long abc = ( (1LL * l) * b * h);
            return abc;
        }



        bool operator <(Box b1)                       // '<' operator overloading
        {
       
            if(l < b1.l) 
            {
                return true;
            }
            else if((b < b1.b) && (l == b1.l))
            {
                return true;
            }
            else if((h < b1.h) && (l == b1.l) && (b == b1.b))
            {
                return true;
            }
            else
            {
                return false;
            }

        }


        friend ostream& operator<<(ostream& os, const Box& B) 
        {
            os << B.l << " " << B.b << " " << B.h;
            return os;
        }


};


void check2()
{
	int n;
	cin>>n;
	Box temp;

	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;

		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();

    return 0;
}