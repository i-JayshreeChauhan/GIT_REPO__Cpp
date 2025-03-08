#include <iostream>
#include <cstdarg>  // Required for va_list
using namespace std;

int sum(int count, ...) 
{
    va_list args;  // Declare argument list
    va_start(args, count); // Initialize argument list
    int total = 0;
    
    for (int i = 0; i < count; i++) 
    {
        total += va_arg(args, int);  // Fetch next argument
    }
    
    va_end(args);  // Clean up
    return total;
}

int main() 
{
    cout << "Sum: " << sum(4, 1, 2, 3, 4) << std::endl;
    return 0;
}
