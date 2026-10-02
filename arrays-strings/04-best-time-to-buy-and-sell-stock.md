## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Maintained a running minimum purchase price while calculating potential profit on each day in a single pass.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Profit defaults to 0 if every subsequent day yields a lower price than previous days.