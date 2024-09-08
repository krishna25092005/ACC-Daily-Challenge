#include <iostream>
using namespace std;

// Function to print the hollow diamond pattern
void hollowDiamondPattern(int n)
{
    // First half of the diamond (upper half)
    for (int i = n / 2; i >= 1; i--)  // Loop from n/2 down to 1
    {
        // Print the left half of stars
        for (int j = 1; j <= i; j++)  
        {
            cout << "*";
        }

        // Print the middle spaces
        for (int j = 1; j <= n - 2 * i; j++)
        {
            cout << " ";
        }

        // Print the right half of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    // Second half of the diamond (lower half)
    for (int i = 1; i <= n / 2; i++)  // Loop from 1 to n/2
    {
        // Print the left half of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Print the middle spaces
        for (int j = 1; j <= n - 2 * i; j++)
        {
            cout << " ";
        }

        // Print the right half of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";  // Input the value of n
    cin >> n;  // Read the value of n from the user

    // Call the function to print the hollow diamond pattern
    hollowDiamondPattern(n);

    return 0;  // End of the program
}
