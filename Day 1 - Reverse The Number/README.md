## Approach

This solution reads the number of test cases, then processes each number by reversing it. The reversal is achieved by repeatedly extracting the last digit and appending it to a new number, which results in the reverse of the original number. Here's how it works:

1. **Input Reading**: Read the total number of test cases `T`.
2. **Reversing Process**:
   - For each number `N`, initialize `reverseNumber` to 0.
   - Extract the last digit of `N` using `n % 10` and append it to `reverseNumber`.
   - Divide `N` by 10 to remove the last digit and repeat the process until `N` becomes 0.
3. **Output the Result**: Print the reversed number for each test case.

### Example Walkthrough

- For `N = 12345`, the reverse is calculated as `54321`.
- For `N = 2300`, after reversing, the leading zeros are removed, resulting in `32`.

---

Let’s code, collaborate, and conquer! 💻✨
