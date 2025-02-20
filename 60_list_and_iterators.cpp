#include<iostream>
#include<list>
using namespace std;


void display(list<int> &l1)
{

    list<int> :: iterator it = l1.begin() ;


    for(it= l1.begin() ; it !=l1.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
}



int main()
{

    list<int> l1;
    
    for(int i=0;i<10;i++)
    {
        l1.push_back(i);
    }

    for(int i=5;i>2;i--)
    {
        l1.push_back(i);
    }

    display(l1);

    l1.remove(4);

    display(l1);




    
    return 0;


}