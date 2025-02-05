#include<iostream>
#include<string>

using namespace std;

class binary
{
    string s;  // members of class are by default private 
    void check_binary();

public:
    void input_string();
    
    void ones_compliment();
    void display_data();
};

void binary::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')  // Check if each character is 0 or 1
        {
            cout << "\n!! Invalid Binary Input !!" << endl;
            exit(0);  // Stop further processing, but do not exit program
        }

    }
}

void binary::ones_compliment()
{
    check_binary();

    // Flip bits (ones' complement)
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary::display_data()
{
    cout << "\nstring : " << s << endl;
}

void binary::input_string()
{
    cout << "Enter a binary string: ";
    cin >> s;
}

int main()
{
    binary b1;

    b1.input_string();
    b1.display_data();  // Display the original binary string


    b1.ones_compliment();  // Flip the binary string
    b1.display_data();  // Display the modified string

    return 0;
}
