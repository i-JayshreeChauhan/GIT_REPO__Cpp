#include<iostream>
#include<fstream>
using namespace std;


/*

//--------------- Important class for file input output handling

1. fstreambase
2. ifstream      --> derived from fstreambase
3. ofstream      --> derived from fstreambase


In order to work with files , we need to open it first --- and there are two ways to open it
1. using the constructor
2. using the member function Open() of the class



*/



int main()
{

    string s="My name is jayshree.\nMy best friend is chintu.";
    string st;
    string f="samplefile.txt";

    ofstream o1(f);       //opening file using constructor
    o1<<s;                //Note : if file doesnot exist - it creates , if content exists (it overwrites)
    o1.close();

    ifstream i1(f);
    //i1>>st;               //Note : this reads until the space is detected
    getline(i1, st);       //Note : this read entire line until newline char
    cout<<st<<endl;
    getline(i1, st);       //Note : this will read other line 
    cout<<st<<endl;

    i1.close();

    
    return 0;


}