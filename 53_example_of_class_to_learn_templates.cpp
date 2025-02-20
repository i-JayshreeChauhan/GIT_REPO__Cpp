#include<iostream>
using namespace std;

class calc
{

    public:
        int size;
        int *arr;

        calc(int m)
        {
            size=m;
            arr = new (nothrow) int[size];
        }

        int sum(calc &c)
        {
            int result=0;

            for(int i=0 ; i<size ; i++)
            {
                result += this->arr[i] * c.arr[i] ;     /// this code will also work here ---> result += arr[i] * c.arr[i] ;
            }

            return result;
        }


        
        ~calc()    //destructor
        {
           delete[] arr; //free allocated memory
        }

        


};


int main()
{

    calc c1(3);
    

    c1.arr[0] = 1;
    c1.arr[1] = 2;
    c1.arr[2] = 3;

    calc c2(3);

    c2.arr[0] = 1;
    c2.arr[1] = 2;
    c2.arr[2] = 3;

    int res = c1.sum(c2);
    cout<<"result = "<<res<<endl;
    
    return 0;


}