#include<iostream>
#include<iomanip>
using namespace std;

//------ refer prog : 53_example_of_class_to_learn_templates.cpp for better understanding

template <class T>
class calc
{

    public:
        int size;
        T *arr;

        calc(int m)
        {
            size=m;
            arr = new (nothrow) T[size];
        }

        T sum(calc &c)
        {
            T result=0;

            for(int i=0 ; i<size ; i++)
            {
                result += this->arr[i] * c.arr[i] ;
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

    //------ int type

    calc <int> c1(3);
    
    c1.arr[0] = 1;
    c1.arr[1] = 2;
    c1.arr[2] = 3;

    calc <int> c2(3);

    c2.arr[0] = 1;
    c2.arr[1] = 2;
    c2.arr[2] = 3;

    int res = c1.sum(c2);
    cout<<"result = "<<res<<endl;

    //------ float type

    calc <float> c3(3);
    
    c3.arr[0] = 1.1;
    c3.arr[1] = 2.2;
    c3.arr[2] = 3.3;

    calc <float> c4(3);

    c4.arr[0] = 1.1;
    c4.arr[1] = 2.2;
    c4.arr[2] = 3.3;

    float res1 = c3.sum(c4);
    cout<<"result = "<<fixed<<setprecision(2)<<res1<<endl;
    
    return 0;


}