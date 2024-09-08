## Approach

1. XOR all elements in the array: You XOR all the elements of the input array, which are all integers from 1 to n except one missing number.
   - The XOR approach works based on the property that:
     - x ^ x = 0 (XOR of any number with itself is 0).
     - x ^ 0 = x (XOR of any number with 0 is the number itself).
2. XOR all numbers from 1 to n: You XOR all numbers from 1 to n.
3. Final XOR operation: Since the numbers appear in both the array and the complete range of n except one missing number, XORing the two will cancel out the common numbers and leave only the missing number.
