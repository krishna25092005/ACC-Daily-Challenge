# Day 18: Two sum -Pairs with 0 Sum

## Problem Statement

Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

## Examples

**Example 1:**

- Input: arr = [-1, 0, 1, 2, -1, -4]
- Output: [[-1, 1]]
- Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
               arr[2] + arr[4] = 1 + (-1) = 0.
               The distinct triplets are [-1,1].

**Example 2:**

- Input: arr = [6, 1, 8, 0, 4, -9, -1, -10, -6, -5]
- Output: [[-6, 6],[-1, 1]]
- Explanation: The distinct triplets are [-1, 1] and [-6, 6].

## Company Tags

Flipkart, Accolite, Amazon, FactSet, Hike, MakeMyTrip, Goldman Sachs, Adobe, Salesforce

## Constraints

- 3 <= arr.size <= 10^5
- 10^5 <= arr[i] <= 10^5

## Expected Time Complexity

- **O(nlogn)**

## Expected Space Complexity

- **O(n)**
