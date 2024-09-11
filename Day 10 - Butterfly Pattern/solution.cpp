/*
Author : [Krishna]
Date : [11/09/2024]
Objective : C++ program to print butterfly pattern.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print the Butterfly pattern
void butterflyPattern(int n)
{
    // Main logic to print the Butterfly pattern.
    // Printing upper part.
    for (int i = 0; i <= n; i++)
    {
        // Print left side stars.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // Print spaces.
        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }

        // Print right side stars.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Printing bottom part.
    for (int i = n - 1; i >= 0; i--)
    {

        // Print left side spaces.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // Print spaces.
        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }

        // Print right side stars.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Call the function to print the pattern
    butterflyPattern(n);

    return 0;
}
