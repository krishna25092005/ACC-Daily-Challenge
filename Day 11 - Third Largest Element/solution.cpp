#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    // Time Complexity : O(n*logn)
    // Space Complexity : O(1)
    int bruteForce(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), greater<int>());
        return arr[2];
    }

public:
    int thirdLargest(vector<int> &arr)
    {
        return bruteForce(arr);
    }
};

// Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.thirdLargest(arr) << endl;
    }

    return 0;
}