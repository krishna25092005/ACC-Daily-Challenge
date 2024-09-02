/*
Author : Krishna Chauhan
Date : September 01, 2024
Objective : Reverse The Number
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the number
        int n;
        cin >> n;

        // Reverse the number
        int reverseNumber = 0;
        while (n > 0)
        {
            int lastDigit = n % 10;
            reverseNumber = (reverseNumber * 10) + lastDigit;
            n /= 10;
        }

        // Print the reversed number
        cout << reverseNumber << endl;
    }

    return 0;
}