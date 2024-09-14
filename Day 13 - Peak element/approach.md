## Approach

1. _Two Methods for Finding Peak Element:_

   - The bruteForce method iterates through the array to find the maximum element, with a time complexity of O(n). It compares each element with a variable ans initialized to INT_MIN and updates ans if a larger element is found.

   - The optimalApproach uses binary search to find a peak element, which is either greater than or equal to its neighbors, with time complexity O(log n).

2. _Binary Search for Efficiency:_

   - The optimalApproach divides the array into halves, checking if the middle element is a peak (greater than or equal to neighbors). Based on the comparison with neighbors, it narrows the search range by adjusting low and high pointers, reducing the problem size with each step.

3. _Edge Case Handling:_

   - The conditions (mid == 0 || arr[mid - 1] <= arr[mid]) and (mid == n - 1 || arr[mid + 1] <= arr[mid]) ensure that edge cases where the mid element is at the boundaries of the array are handled correctly.
