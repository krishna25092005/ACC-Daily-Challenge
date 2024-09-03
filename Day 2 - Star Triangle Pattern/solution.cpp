#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    // Loop through each row from 0 to n-1
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces to align stars in the center
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " "; // Print space
        }

        // Print stars in the current row, where the number of stars is (2 * i + 1)
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            cout << "*"; // Print star
        }

        // Print trailing spaces for better formatting (optional, but commonly used)
        for (int j = 1; j <= n - i; j++)
        {
            cout << " "; // Print space
        }

        // Move to the next line after printing each row
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        nStarTriangle(n);
    }
    return 0;
}
