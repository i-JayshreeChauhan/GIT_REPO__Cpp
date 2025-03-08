#include <iostream>
using namespace std;

// Base case (stopping condition)
constexpr int sum()                    //---> constexpr excutes this at compile time
{
    return 0;
}

// Recursive variadic template function
template <typename T, typename... Args>
constexpr int sum(T first, Args... rest) 
{
    

    return first + sum(rest...);
}

int main() 
{
    cout << "Sum: " << sum(1, 2, 3, 4, 5) << std::endl;
    return 0;
}
