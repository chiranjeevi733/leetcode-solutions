## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Repeatedly halved the sorted search space using boundary pointers `left` and `right`.

### Complexity
- Time: $O(\log n)$
- Space: $O(1)$

### Notes
Calculated midpoint as `left + (right - left) / 2` to prevent potential integer overflow bugs in C.