## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Used a two-pointer technique initialized at opposite ends of the character array, swapping characters in-place toward the center.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Modifying the buffer directly avoids auxiliary heap allocation and satisfies in-place constraints.