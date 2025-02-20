#include<iostream>
#include<map>
using namespace std;

int main()
{

    
    map<string,int> mp;          //map (stores the data in sorted form)
     
    mp["Jayshree"]=1;
    mp["Chitrang"]=2;
    mp["Kaushal"]=3;
    
    map<string,int> :: iterator it;

    for(it=mp.begin() ; it!=mp.end() ; it++)
    {
        cout<<"Name : "<<(*it).first<<"   roll number : "<<(*it).second<<endl;
    }


    
    return 0;


}