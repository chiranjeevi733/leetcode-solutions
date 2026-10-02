## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Checked every pair of elements using nested loops to locate the combination equaling the target sum. Dynamic memory was allocated for the returned index pair.

### Complexity
- Time: $O(n^2)$
- Space: $O(1)$ auxiliary space

### Notes
In C, returning an array requires explicit dynamic allocation via `malloc` and updating the output pointer `returnSize`.