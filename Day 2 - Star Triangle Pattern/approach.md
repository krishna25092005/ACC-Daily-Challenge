Approach
This solution generates the N-Star Triangle pattern by iterating over each row and carefully aligning stars (\*) with leading spaces to center the pattern. The process is as follows:

Row Iteration:

Loop through each row i from 0 to N-1.
Leading Spaces:

For each row, print N - i - 1 spaces to ensure that the stars are centered.
Star Printing:

Print (2 \* i + 1) stars in the current row. This creates a symmetrical triangle, where the number of stars increases by two for each subsequent row.
Optional Trailing Spaces:

Print additional spaces after the stars for visual symmetry. This step is optional but can improve the pattern’s appearance.
Line Break:

After printing the stars and spaces for the current row, move to the next line to prepare for the next row.
Example Walkthrough
For N = 3, the pattern generated is:
markdown
Copy code

-

---

---

Row 0: 2 leading spaces, 1 star.
Row 1: 1 leading space, 3 stars.
Row 2: 0 leading spaces, 5 stars.
This approach ensures that the triangle is perfectly aligned and symmetric, providing a visually appealing pattern output.

Let’s code, collaborate, and conquer! 💻✨
