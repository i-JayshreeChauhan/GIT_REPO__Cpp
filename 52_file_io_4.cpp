#include <iostream>
#include <fstream>

using namespace std;

/*

ios::in	        Read mode (input mode). Fails if the file does not exist.
ios::out	    Write mode (output mode). Creates a new file or overwrites existing content.
ios::app	    Append mode. Always writes at the end of the file. Preserves existing content.
ios::ate	    At End mode. Opens file, moves pointer to the end, but allows writing/reading anywhere.
ios::trunc	    Truncate mode. Deletes existing content if the file exists.
ios::binary	    Binary mode. Reads/writes file in binary format instead of text.

*/



int main() 
{
    string st;
    ofstream file; 
    file.open("samplefile.txt",ios::app);     //append mode
    file << "Updated line.\n";
    file.close(); 


   

    ifstream file1;
    file1.open("samplefile.txt",ios::in);     //read mode

    while(getline(file1, st))
    {
        
        cout<<st<<endl;
    }
  
    file1.close(); 

  

    return 0;
}
