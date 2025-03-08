#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    string text = "Hello Jayshree, how are you?";
    char ch = 'J';

    auto it = find(text.begin(), text.end(), ch);

    if (it != text.end()) 
    {
        cout << "Character found at index: " << distance(text.begin(), it) << endl;
    } 
    else 
    {
        cout << "Character not found!" << endl;
    }

    return 0;
}
