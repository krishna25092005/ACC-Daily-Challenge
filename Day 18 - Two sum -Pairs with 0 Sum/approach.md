## Approach

1. _Sort the array:_
 
- Sorting the input array allows us to efficiently find pairs with a sum of zero using the two-pointer technique.

2. _Two-pointer technique:_ 

- We initialize two pointers, left (at the start) and right (at the end). By calculating the sum of elements at these pointers:
- If the sum is zero, we store the pair and adjust both pointers.
- If the sum is less than zero, we move the left pointer to increase the sum.
- If the sum is greater than zero, we move the right pointer to decrease the sum.

3. _Skip duplicates:_ 

- After finding a valid pair, both pointers are adjusted to skip over any duplicate elements to ensure only unique pairs are included in the result.
