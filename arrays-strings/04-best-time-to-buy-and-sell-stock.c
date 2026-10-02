#include <stdio.h>
#include <assert.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = 1e9;
    int maxProfit = 0;
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main(void) {
    // Test Case 1: Typical case
    int p1[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(p1, 6) == 5);

    // Test Case 2: Edge case (strictly decreasing prices)
    int p2[] = {7, 6, 4, 3, 1};
    assert(maxProfit(p2, 5) == 0);

    printf("04-buy-sell-stock: All tests passed!\n");
    return 0;
}