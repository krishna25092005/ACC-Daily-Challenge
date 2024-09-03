## Approach

This solution involves creating a triangle of stars that is centered and grows with each row. The approach is broken down into the following steps:

1. **Row Iteration:**: Loop through each row from 0 to N-1.
2. **Leading Spaces:**: For each row, print N - i - 1 spaces to center the stars.
3. **Star Printing:**: Print (2 * i + 1) stars for the current row.
4. **Optional Trailing Spaces:**: Include additional spaces after the stars for symmetry, though this is optional.
5. **Line Break:**: Move to the next line after printing stars for the current row.

### Example Walkthrough

- For `N = 5`, the output is:
  
  ![images](https://github.com/user-attachments/assets/4419727a-6b24-4c47-bd68-76180e2fffe9)
  
  - Row 0: 2 leading spaces, 1 star.
  - Row 1: 1 leading space, 3 stars.
  - Row 2: 0 leading spaces, 5 stars.  

---

Let’s code, collaborate, and conquer! 💻✨
