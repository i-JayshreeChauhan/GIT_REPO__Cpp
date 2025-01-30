#include<iostream>
using namespace std;

int main()
{

    /* Here we have used f and l behind the numbers - they are called as variable literals
    when decimal value is passed to anything without a type compiler consider it to be of double type 
    hence when you want to tell that the value is of this type - you send literals with them
    
    
    example 
    
    
    int k=0;

    XYZfunction(int arg1 , float arg2) ;    //function prototype

    XYZfunction(k,34.4f)  ---> here if i would pass 34.4 (compiler would consider it double when compiling - but as i have used
    literals - it will consider it a float value)
    
     */

    cout<<"size of 34.4 is : "<<sizeof(34.4)<<endl;    // will get 8 -- size of double type
    cout<<"size of 34.4 is : "<<sizeof(34.4f)<<endl;    // will get 4 -- size of float type 

    return 0;


}