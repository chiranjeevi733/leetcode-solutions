## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used horizontal scanning starting with the first string as the prefix, truncating with a null-terminator whenever a mismatch was found against subsequent strings.

### Complexity
- Time: $O(S)$ where $S$ is the sum of characters across all strings
- Space: $O(1)$ auxiliary space (excluding result buffer)

### Notes
Placing `\0` at index `j` truncates the prefix in $O(1)$ time without extra memory allocations.