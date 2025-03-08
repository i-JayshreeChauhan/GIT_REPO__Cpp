
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;


int main() 
{

    int N,S,P,Q;
    
    cin>>N>>S>>P>>Q;
    
    set<long long> s;

    
    long long value = S % (1LL<<31) ;
    //cout<<"v["<<0<<"]="<<v[0]<<endl;
    s.insert(value);
    
    for(int i=1 ; i< N ; i++)
    {
        value = ( value *P)+ (Q % (1LL<<31) ) ;
        //cout<<"v["<<i<<"]="<<v[i]<<endl;
        s.insert(value);
    }
    

    //cout<<"distinct values : "<<s.size()<<endl;
    cout<<s.size()<<endl;
    
    return 0;
}
