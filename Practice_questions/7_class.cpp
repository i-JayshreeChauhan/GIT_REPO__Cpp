/*

We can store details related to a student in a class consisting of his age (int), first_name (string), last_name (string) and standard (int).

You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

Input Format
------------

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format
-------------

The code provided by HackerRank will use your class members to set and then get the elements of the Student class.

Sample Input
--------------

15
john
carmack
10


Sample Output
--------------

15
carmack, john
10

15,john,carmack,10


*/


#include<iostream>
using namespace std;

class student
{
    private:
        int age,std;
        string firstname , lastname;
    public:
        void setdata(int a , string s , string s1  , int b )
        {
            age=a;
            std=b;
            firstname = s;
            lastname = s1;
        }

        void printdata1()
        {
            cout<<age<<endl;
            cout<<lastname<<", "<<firstname<<endl;
            cout<<std<<endl;
        }
        
        void printdata2()
        {
            cout<<endl<<age<<","<<firstname<<","<<lastname<<","<<std<<endl;
        }
};



int main()
{

    student s1;

    int a,b;
    string ss1,ss2;

    cin>>a;
    cin>>ss1;
    cin>>ss2;
    cin>>b;

    s1.setdata(a,ss1,ss2,b);
    s1.printdata1();
    s1.printdata2();

    
    return 0;


}