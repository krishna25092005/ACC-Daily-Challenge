# Day 11: Third largest element

## Problem Statement

Given an array, arr of positive integers. Find the third largest element in it. Return -1 if the third largest element is not found.

## Examples

**Example 1:**
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The third largest element in the array [2, 4, 1, 3, 5] is 3.

**Example 2:**
Input: arr[] = [10, 2]
Output: -1
Explanation: There are less than three elements in the array, so the third largest element cannot be determined.

**Example 3:**
Input: arr[] = [5, 5, 5]
Output: 5
Explanation: In the array [5, 5, 5], the third largest element can be considered 5, as there are no other distinct elements.

## Constraints

- 1 ≤ arr.size ≤ 10^5
- 1 ≤ arr[i] ≤ 10^5

## Expected Time Complexity

- **O(n)**

## Expected Space Complexity

- **O(1)**
