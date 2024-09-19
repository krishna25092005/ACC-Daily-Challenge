/*
Author : [Krishna]
Date : [19/09/2024]
Objective : C++ program to find Two sum -Pairs with 0 Sum.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> getPairs(vector<int> &arr)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end()); // Step 1: Sort the array
        int left = 0;
        int right = arr.size() - 1;

        while (left < right)
        {
            int sum = arr[left] + arr[right];

            if (sum == 0)
            {
                ans.push_back({arr[left], arr[right]});

                // Step 3: Move pointers
                int leftVal = arr[left];
                int rightVal = arr[right];

                // Move left pointer to the right
                while (left < right && arr[left] == leftVal)
                {
                    left++;
                }
                // Move right pointer to the left
                while (left < right && arr[right] == rightVal)
                {
                    right--;
                }
            }
            else if (sum < 0)
            {
                left++; // If sum is less than 0, move the left pointer to the right
            }
            else
            {
                right--; // If sum is greater than 0, move the right pointer to the left
            }
        }

        return ans; // Return the list of unique pairs
    }
};
