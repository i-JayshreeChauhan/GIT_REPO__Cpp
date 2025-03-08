/*

You are given four integers: N,S ,P ,Q . You will use them in order to create the sequence a with the following pseudo-code.

a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31) 

Your task is to calculate the number of distinct integers in the sequence a.

Input Format
------------

Four space separated integers on a single line, N , S, P, and Q respectively.   


Output Format
-------------

A single integer that denotes the number of distinct integers in the sequence .

Constraints
-----------
1 <= N <= 10^8
0 <= S,P,Q < 2^31

Sample Input
------------

3 1 1 1

Sample Output
-------------

3

Explanation
-----------

a = [1,2,3]


Hence, there are 3 different integers in the sequence.



*/

#include <iostream>

using namespace std;


int main() 
{
    int N, S, P, Q;
    cin >> N >> S >> P >> Q;

    long long mod = (1LL << 31); // 2^31
    long long slow = S % mod, fast = S % mod;

    int count = 1;  // First element is always unique

    // Tortoise and Hare (Cycle Detection)
    for (int i = 1; i < N; i++) 
    {
        slow = (slow * P + Q) % mod;  // Move slow by 1 step
        
        fast = (fast * P + Q) % mod;
        fast = (fast * P + Q) % mod;  // Move fast by 2 steps

        count++;

        if (slow == fast)  // Cycle detected
            break;
    }

    cout << count << endl;
    return 0;

}