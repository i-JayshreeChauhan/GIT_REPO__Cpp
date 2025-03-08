/*

A student signed up for n workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following:

Implement 2 structures:

1- struct Workshop having the following members:
    -The workshop's start time.
    -The workshop's duration.
    -The workshop's end time.

2- struct Available_Workshops having the following members:

    -An integer, n (the number of workshops the student signed up for).
    -An array of type Workshop array having size n.

Implement 2 functions:

1- Available_Workshops* initialize (int start_time[], int duration[], int n)
    Creates an Available_Workshops object and initializes its elements using the 
    elements in the start_time[] and duration[]  parameters (both are of size n ).
    Here, start_time[i]  and duration[i] are the respective start time and duration 
    for the  ith workshop. This function must return a pointer to an Available_Workshops object.

2- int CalculateMaxWorkshops(Available_Workshops* ptr)
    Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.

Note: An array of unknown size (n) should be declared as follows:

DataType* arrayName = new DataType[n];


Input Format
------------

Input from stdin is handled by the locked code in the editor; you simply need to write your functions to meet the specifications of the problem statement above.

Constraints
-----------
1 <= N <= 10^5
0 <= start_time(i) <= 10^3
0 <= duration(i) <= 10^3

Output Format
-------------

Output to stdout is handled for you.

Your initialize function must return a pointer to an Available_Workshops object.
Your CalculateMaxWorkshops function must return maximum number of non-overlapping workshops the student can attend.

Sample Input
-------------

6
1 3 0 5 5 8
1 1 6 2 4 1

Sample Output
-------------

CalculateMaxWorkshops should return 4 .

Explanation
-----------

The first line denotes n, the number of workshops.
The next line contains n space-separated integers where the ith integer is the ith workshop's start time.
The next line contains n space-separated integers where the ith integer is the ith workshop's duration.

The student can attend the workshops 0,1,3, and 5  without overlap,
so CalculateMaxWorkshops returns 4 to main (which then prints 4 to stdout).


*/


#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop
{
    int stattime;
    int duration;
    int endtime;

};


struct Available_Workshops
{
    int n;  //available workshopss
    Workshop *w;


    Available_Workshops(int num) : n(num)        //parameterized constructor 
    {
        w = new Workshop[n];    //dynamically allocating memory for n workshops
    }

    ~Available_Workshops()
    {
        delete[] w; // Free memory in the destructor
    }
};

Available_Workshops* initialize (int start_time[], int duration[], int n)
{

    Available_Workshops  *w1 = new Available_Workshops(n);

    for(int i=0;i<n;i++)
    {
        w1->w[i].stattime = start_time[i] ;
        w1->w[i].duration = duration[i] ;       
        w1->w[i].endtime = start_time[i] + duration[i];
    }

    return w1;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{

    int n = ptr->n;
    Workshop* workshops = ptr->w;

    // Sort workshops by end time
    sort(workshops, workshops + n, [](Workshop& a, Workshop& b) {
        return a.endtime < b.endtime;
    });

    int count = 0;
    int last_end_time = 0;

    for (int i = 0; i < n; i++) {
        if (workshops[i].stattime >= last_end_time) {
            count++;
            last_end_time = workshops[i].endtime;
        }
    }

    return count;
}

//Implement the functions initialize and CalculateMaxWorkshops

int main(int argc, char *argv[]) 
{
    int n; // number of workshops
    cin >> n;

    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];


    for(int i=0; i < n; i++)
    {
        cin >> start_time[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;

    return 0;
}
