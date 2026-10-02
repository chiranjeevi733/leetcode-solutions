## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a fast-slow pointer pattern where non-zero numbers are swapped forward to `nonZeroPos` in a single pass.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
In-place element swapping eliminates the need for a secondary array buffer.