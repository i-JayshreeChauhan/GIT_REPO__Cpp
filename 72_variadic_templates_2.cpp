#include <iostream>
using namespace std;

// Base case: when there's only one argument left
void print() 
{
    cout << endl;
}

// Variadic function template
template <typename First, typename... Rest>
void print(First first, Rest... rest) 
{
    cout << first << " ";
    print(rest...);  // Recursive call with remaining arguments
}

int main() 
{
    print("Hello", 42, 3.14, 'A');  
    return 0;
}
