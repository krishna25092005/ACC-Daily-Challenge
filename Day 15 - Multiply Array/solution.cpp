/*
Author : [Krishna]
Date : [16/09/2024]
Objective : C++ program to calculate product of all elements in an array.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    // Function to calculate product of all elements in a given array.
    // Time Complexity : O(N)
    // Space Complexity : O(1)
    int multiplyArray(int arr[], int N)
    {

        int product = 1;
        for (int i = 0; i < N; i++)
        {
            product *= arr[i];
        }
        return product;
    }

public:
    int product(int arr[], int N)
    {
        multiplyArray(arr, N);
    }
};