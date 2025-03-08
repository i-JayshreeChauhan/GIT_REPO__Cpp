#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    unordered_set<int> results = {10, 20, 30, 10, 40, 20}; // Duplicates auto removed

    cout << "Total unique values: " << results.size() << std::endl; // Output: 4

    return 0;
}
