#include <iostream>
using namespace std;

// Function to find the length of a string without using built-in functions
int findLength(const string &s)
{
    int count = 0; // Variable to store the length of the string
    // Loop through each character in the string until we encounter the null terminator '\0'
    while (s[count] != '\0')
    {
        count++;
    }
    return count; // Return the final count as the length of the string
}

int main()
{
    string s;
    // Use getline() to allow input with spaces and newlines
    getline(cin, s);

    // Output the length of the string by calling the findLength() function
    cout << "Length of the string: " << findLength(s) << endl;
    return 0;
}
