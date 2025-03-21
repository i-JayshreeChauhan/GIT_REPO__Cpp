
/*

You are given N integers.Sort the N integers and print the sorted order.
Store the N integers in a vector.Vectors are sequence containers representing arrays that can change in size.

Declaration:

vector<int>v; (creates an empty vector of integers)

Size:
int size=v.size();

Pushing an integer into a vector:
v.push_back(x);(where x is an integer.The size increases by 1 after this.)

Popping the last element from the vector:
v.pop_back(); (After this the size decreases by 1)

Sorting a vector:

sort(v.begin(),v.end()); (Will sort all the elements in the vector)

Input Format
-----------

The first line of the input contains N where N is the number of integers. The next line contains N integers.


Constraints
-----------

1 <= N <= 10^5
1 <= vi <= 10^9   (where vi is ith integer in the vector)

Output Format
------------

Print the integers in the sorted order one by one in a single line followed by a space.

Sample Input
------------

5
1 6 10 8 4

Sample Output
-------------

1 4 6 8 10

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> v1;
    int N,temp;
    
    cin>>N;
    
    for(int i=0; i<N ; i++)
    {
        cin>>temp;
        v1.push_back(temp);
    }
    
    sort(v1.begin(), v1.end());   //ascending order sort
    
    for(int i=0; i<N ; i++)
    {
        cout<<v1.at(i)<<" ";
    }
    
    
    return 0;
}

