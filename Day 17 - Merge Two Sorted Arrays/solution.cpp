/*
Author : [Krishna]
Date : [18/09/2024]
Objective : C++ program to merge two sorted arrays.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> mergeArrays(vector<int> arr1, vector<int> arr2, vector<int> ans)
{
    int x = 0, y = 0, z = 0;
    while (x < arr1.size() && y < arr2.size())
    {
        if (arr1[x] < arr2[y])
        {
            ans[z++] = arr1[x++];
        }
        else
        {
            ans[z++] = arr2[y++];
        }
    }

    // If elements are left in arr1
    while (x < arr1.size())
    {
        ans[z++] = arr1[x++];
    }

    // If elements are left in arr2
    while (y < arr2.size())
    {
        ans[z++] = arr2[y++];
    }

    return ans;
}

// NOTE: Driver code starts
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m), ans(n + m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    ans = mergeArrays(arr1, arr2, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}