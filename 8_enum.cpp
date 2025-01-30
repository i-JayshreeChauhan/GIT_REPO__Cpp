#include<iostream>
using namespace std;

int main()
{

    enum basket
    {
        banana,
        mango,
        grapes,
        kiwi=8,
        apple=6,
    };
    

    enum basket_1
    {
        okra=3,
        potato,
        onions,
        tomato,
    };

    cout<<banana<<endl;
    cout<<mango<<endl;
    cout<<grapes<<endl;
    cout<<kiwi<<endl;
    cout<<apple<<endl;


    cout<<endl;

    cout<<okra<<endl;
    cout<<potato<<endl;
    cout<<onions<<endl;
    cout<<tomato<<endl;

    cout<<endl;

    basket b1 = grapes;
    basket_1 c1 = onions;


    cout<<b1<<endl;
    cout<<c1<<endl;


    return 0;


}