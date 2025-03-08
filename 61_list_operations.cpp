#include<iostream>
#include<list>

using namespace std;




template <class T>
void display(list<T> &l1)
{


     //list<T>::iterator is inside a template, and T is unknown at compile time.
     //The compiler cannot determine if list<T>::iterator is a type or a static member.
     //typename tells the compiler that list<T>::iterator is a type.

    typename list<T> :: iterator it = l1.begin() ;     //   <<----------------------------------------------


    for(it= l1.begin() ; it !=l1.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
}

int main()
{

    list<char> l1;
    l1.push_back('A');
    l1.push_back('1');
    l1.push_back(' ');
    l1.push_back('/');
    l1.push_back('B');
    l1.push_back('%');
    l1.push_back('C');
    l1.push_back('a');
    l1.push_back('2');
    l1.push_back('l');

    display(l1);
    l1.sort();                      //sorting of elements
    display(l1);

    list<int> l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(5);

    display(l2);
    l2.reverse();
    display(l2);


    list<int> l3;
    l2.push_back(11);
    l2.push_back(22);
    l2.push_back(33);
    l2.push_back(44);
    l2.push_back(55);

    l2.merge(l3);    //empties l3
    display(l2);

    //list<int> :: iterator it = l2.begin();                 // u can use this as well --> auto it = l2.begin(); 
    auto it = l2.begin();
    advance(it,3);     //takes the iterator to the 3rd position

    l2.erase(it);
    display(l2);

    return 0;

}