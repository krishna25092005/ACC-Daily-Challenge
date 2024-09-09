/*
Author : [Krishna]
Date : [09/09/2024]
Objective : C++ program to print a numeric palindrome pyramid pattern with spaces between numbers
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print the numeric palindrome pyramid pattern
void numericPalindromePattern(int n)
{
    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces to center the pyramid
        for (int j = i; j <= n; j++)
        {
            cout << "  "; // Double space for better alignment with the spaces between numbers
        }

        // Print the ascending part of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << j << " "; // Space added between numbers
        }

        // Print the descending part of the pattern
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " "; // Space added between numbers
        }

        // Move to the next line after completing the row
        cout << endl;
    }
}

int main()
{
    // Input the number of rows
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Call the function to print the pattern
    numericPalindromePattern(n);

    return 0;
}
