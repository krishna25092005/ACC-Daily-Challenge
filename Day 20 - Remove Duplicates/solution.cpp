/*
Author : [Krishna]
Date : [21/09/2024]
Objective : C++ program to return the final string after all such duplicate removals have been made.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to remove all the duplicates.
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    string removeDuplicates(string s)
    {
        // Empty string to store the result without duplicates
        string ans;

        for (char ch : s)
        {
            // If the result string is not empty and the last character in 'ans' is the same as the current character
            if (!ans.empty() && ans[ans.size() - 1] == ch)
            {
                // Remove the last character from 'ans' to handle duplicate adjacent characters
                ans.pop_back();
            }
            else
            {
                // If the current character is not a duplicate, append it to 'ans'
                ans += ch;
            }
        }

        // Return the final result string without adjacent duplicates
        return ans;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.removeDuplicates(s) << endl;
    return 0;
}
