# Day 14: Peak element

## Problem Statement

Given an 0-indexed array of integers arr[] of size n, find its peak element and return it's index. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).

Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.

## Examples

**Example 1:**
- Input: n = 3, arr[] = {1, 2, 3}
- Output: 1
- Explanation: If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property, so answer will be printed as 0.

**Example 2:**
- Input: n = 7, arr[] = {1, 1, 1, 2, 1, 1, 1}
- Output: 1
- Explanation: In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.

## Your Task:

You don't have to read input or print anything. Complete the function peakElement() which takes the array arr[] and its size n as input parameters and returns the index of the peak element.

## Constraints

- 1 ≤ n ≤ 10^5
- 1 ≤ arr[i] ≤ 10^6

## Expected Time Complexity

- **O(log(n))**

## Expected Space Complexity

- **O(1)**