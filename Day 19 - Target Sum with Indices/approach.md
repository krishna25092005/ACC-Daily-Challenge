## Approach

1. _Using an unordered Map:_ 

- The code utilizes an unordered_map to store each number from the array as the key and its index as the value.

2. _Iterating through the Array:_ 

- As the code loops through the array, for each number, it calculates the complement (i.e., target - current number). It then checks if the complement already exists in the map, indicating that the current number and the complement add up to the target.

3. _Returning the Indices:_ 

- If the complement is found in the map, the code immediately returns the indices of the complement and the current number. If not, the current number is added to the map, and the loop continues until the solution is found.
