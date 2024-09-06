## Approach

1. We will use a HashSet (unordered set) to keep track of the elements that have already been encountered.
2. If an element is found more than once, it is added to the duplicates set.
3. After processing the entire array, we convert the set of duplicates into a sorted vector. If there are no duplicates, we return [-1].
