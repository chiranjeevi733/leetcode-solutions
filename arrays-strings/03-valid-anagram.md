## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Counted character frequencies using a fixed-size integer array of length 26. Incremented frequencies for string `s` and decremented for `t`.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ (constant 26 integers)

### Notes
Checking length mismatches first terminates invalid cases immediately without scanning characters.