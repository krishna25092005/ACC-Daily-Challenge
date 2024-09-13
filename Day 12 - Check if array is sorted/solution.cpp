#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    bool arraySortedOrNot(vector<int> &arr)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            // If an element is greater than the next one, the array is not sorted
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }
        // If no violations of sorted order, return true
        return true;
    }
};

// Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num)
        {
            nums.push_back(num);
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(nums);
        cout << (ans ? "true" : "false") << endl;
    }
    return 0;
}