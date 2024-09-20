/*
Author : [Krishna]
Date : [20/09/2024]
Objective : C++ program to find the Target sum and return the indices of elements.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // NOTE: Naive Approach -> Time Complexity : O(n^2) , Space Complexity : O(1)
    vector<int> targetSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return {};
    }

    // NOTE: Better Approach -> Time Complexity : O(nlogn) , Space Complexity : O(n)
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> num_with_index; // To store numbers along with their indices

        // Store the numbers along with their original indices
        for (int i = 0; i < nums.size(); i++)
        {
            num_with_index.push_back({nums[i], i});
        }

        // Sort the array by the numbers
        sort(num_with_index.begin(), num_with_index.end());

        // Two-pointer technique
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            int sum = num_with_index[left].first + num_with_index[right].first;

            if (sum == target)
            {
                // Return the original indices
                return {num_with_index[left].second, num_with_index[right].second};
            }
            else if (sum < target)
            {
                left++; // Move left pointer forward
            }
            else
            {
                right--; // Move right pointer backward
            }
        }

        return {}; // Return empty if no solution is found (though a solution always exists)
    }

    // NOTE: Optimal Approach -> Time Complexity : O(n) , Space Complexity : O(1)
    vector<int> targetSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp; // To store the number and its index

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (mp.find(complement) != mp.end())
            {
                return {mp[complement], i}; // Return the indices if found
            }

            // Store the current number with its index in the map
            mp[nums[i]] = i;
        }

        return {}; // Return empty if no solution is found
    }
};
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution obj;
    vector<int> ans = obj.targetSum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
