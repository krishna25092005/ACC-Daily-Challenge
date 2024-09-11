## Approach

1. Input: Take the number of rows as input from the user, let it be n.
2. Upper Part:
   - Iterate i from 0 to n - 1.
   - In each row, first, print i+1 stars (\*), each followed by a space (" ").
   - Then, calculate the number of spaces needed in the middle using the formula space = 2 \* (n - i - 1) and print that many spaces.
   - After the spaces, print i+1 more stars (\*), each followed by a space.
   - Terminate the line after printing each row.
3. Lower Part:
   - Iterate i from n - 1 down to 0 (reverse order).
   - For each row, first, print i+1 stars (\*), each followed by a space.
   - Calculate the number of spaces using the formula space = 2 \* (rows - i - 1) and print the spaces.
   - After the spaces, print i+1 stars again.
   - Terminate the line after printing each row.
