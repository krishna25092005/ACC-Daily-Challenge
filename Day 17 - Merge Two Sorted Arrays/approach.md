## Approach

1. _Two-pointer technique:_

- The function uses two pointers x and y to traverse both sorted input arrays (arr1 and arr2). It compares the current elements from both arrays and appends the smaller element to the result array ans. After appending, the pointer of the corresponding array is incremented.

2. _Handling leftover elements:_

- After one of the arrays is completely traversed, there may still be elements left in the other array. The function uses two additional while loops to append the remaining elements from either arr1 or arr2 into ans.

3. _Final result:_

- The merged sorted array ans is returned after combining elements from both arr1 and arr2. The result maintains the sorted order since both input arrays are already sorted, and the merge is done element by element in order.

