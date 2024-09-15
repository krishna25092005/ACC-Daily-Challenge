/*
Author : [Krishna]
Date : [15/09/2024]
Objective : C++ program to move all negative elements to end.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    // Function to move all negative elements to end
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    void moveNegatives(vector<int> &arr)
    {
        vector<int> positive;
        vector<int> negative;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= 0)
            {

                positive.push_back(arr[i]);
            }
            else
            {

                negative.push_back(arr[i]);
            }
        }

        int index = 0;

        for (int i = 0; i < positive.size(); i++)
        {
            arr[index++] = positive[i];
        }

        for (int i = 0; i < negative.size(); i++)
        {
            arr[index++] = negative[i];
        }
    }

public:
    void segregateElements(vector<int> &arr)
    {
        moveNegatives(arr);
    }
};