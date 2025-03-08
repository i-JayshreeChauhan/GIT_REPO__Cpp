#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 0;

    try 
    {
        if (b == 0) 
        {
            throw "Division by zero is not allowed";  // Throw an exception
        }
        cout << a / b << endl;
    } 
    catch (const char* msg)    // Catch the thrown exception
    {  
        cout << "Error: " << msg << endl;
    }

    return 0;
}
