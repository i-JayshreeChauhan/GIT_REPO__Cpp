#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

/*

function objects (functor) : function wrapped in
a class so that it is available like an object

*/

int main()
{
    int arr[]={9,2,6,72,56,34,52,88,4};

    sort(arr,arr+5);    //sort starting from first element till 5th element

    for(int i=0 ; i<(sizeof(arr)/sizeof(arr[0])) ;i++ )
    {
        cout<<arr[i]<<endl;
    }

    cout<<endl<<endl;


    int arr1[]={9,2,6,72,56,34,52,88,4};

    sort(arr1,arr1+9);    //sort starting from first element till end    //SORTING IN ASCENDING ORDER

    for(int i=0 ; i<(sizeof(arr1)/sizeof(arr1[0])) ; i++ )
    {
        cout<<arr1[i]<<endl;
    }

    cout<<endl<<endl;

    sort(arr1,arr1+9, greater<int>() );    //sort starting from first element till end   //SORTING IN DESCENDING ORDER    

    for(int i=0 ; i<(sizeof(arr1)/sizeof(arr1[0])) ; i++ )
    {
        cout<<arr1[i]<<endl;
    }

    return 0;


}