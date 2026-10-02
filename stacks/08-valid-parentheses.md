## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Implemented a char-array stack to track opening brackets. Upon encountering a closing bracket, popped and validated the matching partner.

### Complexity
- Time: $O(n)$
- Space: $O(n)$

### Notes
Guarded against popping on an empty stack (`top == -1`) to cleanly reject inputs with unbalanced leading closing brackets.