/*

This challenge works with a custom-designed markup language HRML. In HRML, each element consists of a starting and ending tag, and there are attributes associated with each tag. Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '~' and the name of the attribute. The tags may also be nested.

The opening tags follow the format:

        <tag-name attribute1-name = "value1" attribute2-name = "value2" ...>

The closing tags follow the format:

        </tag-name>

The attributes are referenced as:

        tag1~value  
        tag1.tag2~name


Given the source code in HRML format consisting of N lines, answer Q queries. For each query, print the value of the attribute specified. Print "Not Found!" if the attribute does not exist.

Example
-------

HRML listing
<tag1 value = "value">
<tag2 name = "name">
<tag3 another="another" final="final">
</tag3>
</tag2>
</tag1>

Queries
tag1~value
tag1.tag2.tag3~name
tag1.tag2~value



Here, tag2 is nested within tag1, so attributes of tag2 are accessed as tag1.tag2~<attribute>. Results of the queries are:

Query                 Value
tag1~value            "value"
tag1.tag2.tag3~name   "Not Found!"
tag1.tag2.tag3~final  "final"   


Input Format
------------

The first line consists of two space separated integers, N and Q. N specifies the number of lines in the HRML source program. Q specifies the number of queries.

The following N lines consist of either an opening tag with zero or more attributes or a closing tag. There is a space after the tag-name, attribute-name, '=' and value.There is no space after the last value. If there are no attributes there is no space after tag name.

Q queries follow. Each query consists of string that references an attribute in the source program.More formally, each query is of the form
tagi(1).tagi(2).tagi(3).....tagi(n) ~ attr-name where n>=1 and tagi(1).tagi(2).tagi(3).....tagi(m) are valid tags in the input.

Constraints
------------

-   1 <= N <= 20
-   1 <= Q <= 20
-   Each line in the source program contains, at most, 200 characters.
-   Every reference to the attributes in the Q queries contains at most 200 characters.
-   All tag names are unique and the HRML source program is logically correct, i.e. valid nesting.
-   A tag can may have no attributes.

Output Format
-------------

Print the value of the attribute for each query. Print "Not Found!" without quotes if the attribute does not exist.

Sample Input
------------

4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value


Sample Output
-------------

Name1
Not Found!
HelloWorld

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include<string>
#include <algorithm>
using namespace std;




int main()
{

    string doc,str;
    map<string,string> mp;
    string key,val,pattern,tag_string;
    string attr , search_string_for_attr;
    int N,Q;
    int st,en,stu=0,length=0;
    int fin=0;
    int err=0;

    //Ask user for 'N'(number of tag lines) and 'Q'(number of Query lines)
    cin>>N>>Q;
    cin.ignore();  // Fix: Ignore the newline character before using getline


    for(int i=0;i<N;i++)
    {
        getline(cin,str);
        doc = doc + str ;
    }

   




    //doc = "<a value = 'GoodVal'><b value = 'BadVal' size = '10'></b><c height = 'auto'><d size = '3'><e strength = '2'></e></d></c></a>";


    //search first nested tag bunch
    //cout<<"-------------doc size = "<<doc.size()<<endl;

    int k=0,i=0,first=1,dummy_en=0,dis=0,add;

    while(k!=1)
    {

            add=doc.find("><");    //if i<en (means the first tag will get processed )


            if(doc[i]=='<' && doc[i+1]!='/')
            {
                st=i;


                //for cases such as <tag1>\n<tag2 xyz="ABC">   ---> tag containing no info
                dummy_en = doc.find('>',i);     // if case similar to <tag> -- the dummy_en will have value < en  // else it will have value >en

                en=doc.find(' ',i);

                if((dummy_en<en) || (en==-1)) dis=dummy_en-st-1;
                else dis = en-st-1;

                 
                key= doc.substr(st+1,dis);     //tag name  //example : tag1
                if(i<add) tag_string = tag_string + key ;
                else tag_string = tag_string + "." + key ;
                
                
                //cout<<"tag string : "<<tag_string<<endl;

            }
            else if(doc[i]=='<' && doc[i+1]=='/')
            {

                pattern = ("<"+ key + " ");
                auto it = search(doc.begin(), doc.end(), pattern.begin(), pattern.end());   // returns a pointer to the match

                if(it == doc.end())
                {


                    pattern = ("<"+ key + ">");
                    auto it = search(doc.begin(), doc.end(), pattern.begin(), pattern.end());   // returns a pointer to the match
                    st = distance(doc.begin(), it) + pattern.size(); 

                    pattern = ("</"+ key + ">");
                    auto it1 = search(doc.begin(), doc.end(), pattern.begin(), pattern.end());   // returns a pointer to the match
                    en = distance(doc.begin(), it1) ;

                    val="\"";


                    mp.insert(pair<string,string>(tag_string,val));    //insert contents into the map


                    st = (st-pattern.size()) +1 ;
                    en = (en + pattern.size()) - 1;
    
                    //----logic to erase identified value and start over again
                    doc.erase(st,en-st+1);
                    tag_string.clear();
                    i=-1;

                }
                else
                {
                    st = distance(doc.begin(), it) + pattern.size() -1 ;   //kept -1 here to keep <space> in our val string
                    stu = (st-pattern.size()) + 1 ;

                    pattern = ("</"+ key + ">");
                    auto it1 = search(doc.begin(), doc.end(), pattern.begin(), pattern.end());   // returns a pointer to the match
                    en = distance(doc.begin(), it1) ;
                    

                    val=doc.substr(st,(en-st-1));

                    mp.insert(pair<string,string>(tag_string,val));    //insert contents into the map

                    length = (en + pattern.size() ) - stu;

                   
    
                    //----logic to erase identified value and start over again
                    doc.erase(stu,length);
                    tag_string.clear();
                    i=-1;

                }
                
            }


            if(doc.size()==0)
            {
                k=1;
            }
            else
            {
                i++;
            }

    }

    
    /*
    cout<<"---------------------------------------------------------------"<<endl;

    for(auto it1=mp.begin(); it1!= mp.end() ; it1++)
    {
        cout<<"Key : "<<it1->first<<" ------- data : "<<it1->second<<endl;
    } 
    
    cout<<"---------------------------------------------------------------"<<endl;
    
    
    */

    
    for(int i=0;i<Q;i++)
    {
        getline(cin,str);
     
        st = str.find('~');
        tag_string = str.substr(0,st);     // tag string = tag1.tag2....
        attr =  str.substr(st+1);

        key=tag_string;

        auto it = mp.find(key);     //to find whether tag exist in map or not

        if( it == mp.end() ) 
        {
           // cout<<"-------------Not Found!"<<endl;

            err=1;
            
        }
        else
        {
            search_string_for_attr = mp[key];

            pattern =  " " + attr ;     
            auto it1 = search(search_string_for_attr.begin(), search_string_for_attr.end(), pattern.begin(), pattern.end());   // returns a pointer to the match

            if(it1 == search_string_for_attr.end())
            {
               // cout<<"-------------Not Found!"<<endl;
    
                err=1;
                
            }
            else
            {
                ///---------return attribute relevant value
                st = distance(search_string_for_attr.begin(), it1);
                st = st + pattern.size();
        
                val = search_string_for_attr.substr(st+1);
                        
                st = val.find('"');
                val = val.substr(st+1);
        
                st = val.find('"');
                val = val.substr(0,st);
        
                cout<<val<<endl;
            }
        }


        if(err==1) 
        {
            cout<<"Not Found!"<<endl;
            err=0;
        }

        
    
    }

  
    return 0;
}
