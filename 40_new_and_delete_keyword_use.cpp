#include<iostream>
using namespace std;

//Note : new dynamically allocates memory in the heap 

int main()
{

    int a=10;
    int *ptr = &a;

    cout << "the value at address("<<ptr<<") is = "<<*ptr<<endl;


    ///-------dynamic allocation for one variable

    int *p1 = new int;    //allocated space for int type in heap
    *p1 = 42;             //allocating value

    cout<<"value at the address("<<p1<<") = "<<*p1<<endl;

    delete p1;

    ///------- dynamic allocation for an array

    int* arr = new int[5];  // dynamically allocating an array of 5 integers

    for (int i = 0; i < 5; i++) 
    {
        arr[i] = i * 10;  
    }

    for (int i = 0; i < 5; i++) 
    {
        cout << arr[i] << " ";
    }

    delete[] arr;  // freeing allocated memory for the array
    
    return 0;


}