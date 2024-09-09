## Approach

1. Outer Loop (Row Iteration):

- The for loop runs from i = 1 to i = n, where i represents the current row number.
- The outer loop controls the number of rows, and for each row, it performs three tasks: printing leading spaces, ascending numbers, and descending numbers.

2. Printing Leading Spaces:

- For each row i, the number of leading spaces is printed using another loop (for (int j = i; j <= n; j++)). This ensures that the numbers are centered and the pyramid shape is formed.
- Double spaces (" ") are used so that the pattern aligns well with the spaces between the numbers.

3. Printing Ascending Numbers:

- A loop (for (int j = 1; j <= i; j++)) is used to print the numbers from 1 to i, representing the ascending part of the pyramid in that row.
- Each number is followed by a space for proper formatting.

4. Printing Descending Numbers:

- After the ascending part, another loop (for (int j = i - 1; j >= 1; j--)) is used to print the descending part of the pyramid. This prints numbers starting from i - 1 down to 1.
