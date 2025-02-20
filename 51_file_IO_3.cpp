#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream file("samplefile.txt", ios::app); // Open file in append mode

    if (!file) 
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    file << "This is a new line appended to the file.\n";
    
    file.close(); // Close the file
    cout << "Data appended successfully!" << endl;

  

    return 0;
}
