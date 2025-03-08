/*

Input Format
------------


--The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
--Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
--Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and  
j (an index in the array referenced by a[i]) for a query.

sample input
------------

2 2                                           // 2=n=(array size) , 2=q=queries
3 1 5 4                                       // i=0 --> 1st element --> 3=k=number of elements in sub array  (j=1,5,4 --elements)
5 1 2 8 9 3                                   // i=1 --> 2nd element --> 5=k=number of elements in sub array  (j=1,2,8,9,3 --elements)
0 1                                           // 1st query --> find arr[0][1]
1 3                                           // 2nd query --> find arr[1][3]

output
-------
5
9


*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{


    int n, q; 
    cin >> n >> q;

    vector< vector<int> > vec(n);

    for (int i = 0; i < n; i++) 
    {
        int k;
        cin >> k;
    
        vec[i].resize(k);
    
        for (int j = 0; j < k ; j++) 
        {
            cin >> vec[i][j];
        }
    }
    
    for (int m = 0; m < q; m++) 
    {
        int q1, q2;
        cin >> q1 >> q2;
    
        cout << vec[q1][q2] << endl;
    }
    
    return 0;
}
