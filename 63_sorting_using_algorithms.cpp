#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={9,2,6,72,56,34,52,88,4};

    sort(arr,arr+5);    //sort starting from first element till 5th element
    

    for(int i=0 ; i<(sizeof(arr)/sizeof(arr[0])) ;i++ )
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;


}