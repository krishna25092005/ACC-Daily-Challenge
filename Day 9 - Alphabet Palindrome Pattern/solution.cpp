/*
Author : [Krishna]
Date : [10/09/2024]
Objective : C++ program to print a alphabet palindrome pattern.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print the numeric palindrome pyramid pattern
void alphabetPalindromePattern(int n)
{
    int count = 0;

    for (int i = 0; i < 2 * n; i += 2)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)('A' + count);
            if (j < i / 2)
                count++;
            else
                count--;
        }
        count = 0;
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Call the function to print the pattern
    alphabetPalindromePattern(n);

    return 0;
}
