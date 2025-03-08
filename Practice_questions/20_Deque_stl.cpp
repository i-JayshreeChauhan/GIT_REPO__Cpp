/*

Given a set of arrays of size N and an integer K, you have to find the maximum integer for each and every contiguous subarray of size K for each of the given arrays.

Input Format
------------

First line of input will contain the number of test cases T. 
For each test case, you will be given the size of array N and the size of subarray 
to be used K. This will be followed by the elements of the array Ai.

constraints
-----------
1 <= T <= 1000
1 <= N <= 10000
1 <= K <= N
1 <= Ai <= 10000 (where Ai is the ith element in array A)

Output Format

For each of the contiguous subarrays of size K of each array, 
you have to print the maximum integer.

Sample Input

2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10


Sample Output

4 6 6 4
8 8 8 10


Explanation

For the first case, the contiguous subarrays of size 2 are {3,4},{4,6},{6,3} and {3,4}. 
The 4 maximum elements of subarray of size 2 are: 4 6 6 4.
For the second case,the contiguous subarrays of size 4 are {3,4,5,8},{4,5,8,1},{5,8,1,4} and {8,1,4,10}. 
The 4 maximum element of subarray of size 4 are: 8 8 8 10.

*/

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k)
{
	//----- form subarray and keep its track by maintaining its count
    /*
        example 1
        ----------
        5 2
        1 2 3 4 5 --> {1,2} {2,3} {3,4} {4,5}  --> 5-2+1 = 4 (4 pairs)

        example 2
        ----------
        7 4
        1 2 3 4 5 6 7 --> {1,2,3,4} {2,3,4,5} {3,4,5,6} {4,5,6,7}  --> 7-4+1 = 4 (4 pairs)

        example 3
        ----------
        8 3
        1 2 3 4 5 6 7 8 --> {1,2,3} {2,3,4} {3,4,5} {4,5,6} {5,6,7} {6,7,8} --> 8-3+1 = 6 (6 pairs)
    
    */

    int result[n-k+1];   //form result array to save max of every possible pair
    
    for(int i=0 ; i<(n-k+1) ; i++)
    {

        result[i] = 0;

        for(int w=0;w<(k);w++)
        {
            //---compare arr[i+w] and arr[i+w+1]
            if( arr[i+w] > result[i] ) result[i]=arr[i+w];
        }
        
    }

    for(int i=0;i<(n-k+1);i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}

int main()
{
  
	int t;
	cin >> t;

	while(t>0) 
    {
		int n,k;
    	cin >> n >> k;

    	int i;
    	int arr[n];

    	for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
      		

    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}