#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for(int k=0;k<v.size();k++)
    {
       // cout<<"vector["<<k<<"] : "<<v[k]<<endl;
        cout<<"vector["<<k<<"] : "<< v.at(k) <<endl;
    }

}

int main()
{

    vector<int> v1;
    vector<float> v2;       //--------vector 2 initialization
    int sz=0;
    int val;


    cout<<"Enter the size of vector : ";
    cin>>sz;

    for(int i=0;i<sz;i++)
    {
        cout<<"Enter element - "<<i<<" value = ";
        cin>>val;
        v1.push_back(val);  //adds value
    }

    cout<<endl;

    v1.pop_back();  //removes last value

    cout<<endl;
    display(v1);


    for(int i=0;i<5;i++)
    {
        cout<<"Enter element - "<<i<<" value = ";
        cin>>val;
        v2.push_back(val);  //adds value
    }

    //----- now we will make one iterator pointing at the beginning

    vector<int> :: iterator it = v1.begin(); 
    vector<float> :: iterator it1 = v2.end();

    v1.insert((it + 2) , 200);    //insert an element before  it+2 (beginning ie. 0 + 2 = 2----> so it will add it before 2nd element)
    v1.insert((it + 1) , 4 , 200);    //insert 4 element before  it+1 (beginning ie. 0 + 1 = 1----> so it will add them before 1st element)

    cout<<endl;
    display(v1);



    v2.erase((it1-2));

    cout<<endl;
    display(v2);


    return 0;


}