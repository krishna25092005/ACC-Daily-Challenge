#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(int n, vector<int> &arr)
    {
        int ans = 0;

        // XOR all elements in the array and all numbers from 1 to n in one loop
        for (int i = 0; i < n - 1; i++)
        {
            ans ^= arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            ans ^= i;
        }

        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.missingNumber(n, arr) << endl;
    return 0;
}