/*

You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, 
which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
The following are some useful vector functions:

erase(int position):

Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

erase(int start,int end):

Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

Input Format

The first line of the input contains an integer N.The next line contains N space separated integers(1-based index).
The third line contains a single integer x,denoting the position of an element that should be removed from the vector.
The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.

Constraints
-----------

1 <= N <= 10^5
1 <= x <= N
1 <= a < b <= N


Output Format
-------------

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input
------------

6
1 4 6 2 8 9
2
2 4


Sample Output
-------------

3
1 8 9


Explanation
-----------

The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, 
which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void print(vector<int> v1)
{
    for(auto it=v1.begin() ; it!= v1.end() ; it++)
    {
        cout<<*it<<" ";
    }
}

int main() 
{
    int N,temp;
    vector<int> v1;
    int q1,q2_1 , q2_2;

    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>temp;
        v1.push_back(temp);
    }

    cin>>q1;
    v1.erase(v1.begin() + (q1-1) );

    //print(v1);
    //cout<<endl;

    cin>>q2_1>>q2_2;
    v1.erase(v1.begin()+(q2_1-1) , v1.begin()+ (q2_2-1)) ;

    //print(v1);
    //cout<<endl;

    cout<<v1.size()<<endl;
    print(v1);

    return 0;
}
