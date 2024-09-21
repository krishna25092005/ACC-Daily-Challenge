## Approach

1. _Iteration through Characters:_ 

- The function iterates over each character of the input string one by one.

2. _Checking for Adjacent Duplicates:_ 

- For each character, it checks if the current character is the same as the last character in the result string (ans). If they match, the last character is removed to eliminate duplicates.

3. _Building the Result:_ 

- If the current character is not a duplicate, it is added to the result string. This process continues until the entire input string is processed, leaving a string without adjacent duplicates.
