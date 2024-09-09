## Approach

1. Upper Half of the Hollow Diamond:

   - The first for loop handles the printing of the upper half of the diamond pattern, starting from n / 2 rows down to 1.
   - For each row i, the program:
     - Prints i asterisks (\*) on the left side.
     - Prints n - 2 \* i spaces in between to create the hollow section.
     - Prints i asterisks on the right side.
   - The pattern decreases in size from top to middle, reducing the number of asterisks and increasing the spaces in the middle.

2. Lower Half of the Hollow Diamond:

- The second for loop handles the lower half of the pattern, which starts from row 1 and goes up to n / 2.
- For each row i:
  - Prints i asterisks on the left side.
  - Prints n - 2 \* i spaces in between.
  - Prints i asterisks on the right side.
- The pattern increases in size from the middle to the bottom, adding more asterisks and reducing the spaces in the middle.
