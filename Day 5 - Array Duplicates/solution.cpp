#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int xorr(int n, vector<int> &arr)
    {
        int ans = 0;

        // XOR all elements in the array
        for (int i = 0; i < arr.size(); i++)
        {
            ans ^= arr[i];
        }

        // XOR all numbers from 1 to n
        for (int i = 1; i <= n; i++)
        {
            ans ^= i;
        }

        return ans;
    }

    int missingNumber(int n, vector<int> &arr)
    {
        // Call the xorr function with n and the array
        return xorr(n, arr);
    }
};