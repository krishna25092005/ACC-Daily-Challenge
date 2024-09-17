/*
Author : [Krishna]
Date : [17/09/2024]
Objective : C++ program to find the frequency of an element in an array.
*/
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

/*Function to find frequency of x
 * x : element whose frequency is to be found
 * v : input vector
 */
int findFrequency(vector<int> Arr, int X)
{
    // Your code here
    return count(Arr.begin(), Arr.end(), X);
}
int main()
{

    int testcase;

    cin >> testcase;

    while (testcase--)
    {
        int N;
        cin >> N;

        // Declaring vector
        vector<int> Arr;

        // Taking vector element input
        for (int i = 0; i < N; i++)
        {
            int k;
            cin >> k;
            Arr.push_back(k);
        }

        // element whose frequency to be find
        int X;
        cin >> X;
        cout << findFrequency(Arr, X) << endl;
    }

    return 0;
}