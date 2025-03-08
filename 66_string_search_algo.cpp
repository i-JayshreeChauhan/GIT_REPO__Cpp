#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    string text = "Hello Jayshree, how are you?";
    string pattern = "Jayshree";

    auto it = search(text.begin(), text.end(), pattern.begin(), pattern.end());   // returns a pointer to the match

    if (it != text.end()) 
    {
        cout << "Pattern found at index: " << distance(text.begin(), it) << endl;
    } 
    else 
    {
        cout << "Pattern not found!" << endl;
    }

    return 0;
}
