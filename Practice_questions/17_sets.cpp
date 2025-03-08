/*

Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. Here are some of the frequently used member functions of sets:

Declaration:
set<int>s; //Creates a set of integers.

Size:
int length=s.size(); //Gives the size of the set.

Insert:
s.insert(x); //Inserts an integer x into the set s.

Erasing an element:
s.erase(val); //Erases an integer val from the set s.

Finding an element:

set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().

Problem
--------
 you will be given  queries. Each query is of one of the following three types:

1 x  : Add an element  to the set.
2 x  : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
3 x  : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

Input Format
------------

The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each.
 Each query consists of two integers y and x where y is the type of the query and x is an integer.

constraints
-----------
1 <= Q <= 10^5
1 <= y <= 3
1 <= x <= 10^9


Output Format
-------------

For queries of type 3 print "Yes"(without quotes) if the number x is present in the set and if the number is not present, then print "No"(without quotes).
Each query of type 3 should be printed in a new line.

Sample Input
------------

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6


Sample Output
-------------

Yes
No
No


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    int Q,type=0,qval=0;
    cin>>Q;
    set<int> s;

    
    for(int i=0;i<Q;i++)
    {
        cin>>type>>qval;

        if(type==1)
        {
            s.insert(qval);
        }
        else if(type==2)
        {
            s.erase(qval);
        }
        else if(type==3)
        {
            auto it=s.find(qval);

            if(it!=s.end()) cout<<"Yes"<<endl;   //value present
            else cout<<"No"<<endl;
        }
        else
        {

        }

    }



    return 0;
}



