#include <iostream>

int value = 10; // Global variable

namespace MyNamespace 
{
    int value = 20; // Variable inside a namespace
}

int main() 
{
    std::cout << value << std::endl;            // Outputs 10 (global)
    std::cout << MyNamespace::value << std::endl; // Outputs 20 (namespace)
    return 0;
}
