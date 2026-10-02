#include <stdio.h>
#include <assert.h>

void moveZeroes(int* nums, int numsSize) {
    int nonZeroPos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[nonZeroPos];
            nums[nonZeroPos] = nums[i];
            nums[i] = temp;
            nonZeroPos++;
        }
    }
}

int main(void) {
    // Test Case 1: Typical case
    int n1[] = {0, 1, 0, 3, 12};
    moveZeroes(n1, 5);
    assert(n1[0] == 1 && n1[1] == 3 && n1[2] == 12 && n1[3] == 0 && n1[4] == 0);

    // Test Case 2: Edge case (all zeroes)
    int n2[] = {0, 0, 0};
    moveZeroes(n2, 3);
    assert(n2[0] == 0 && n2[1] == 0 && n2[2] == 0);

    printf("07-move-zeroes: All tests passed!\n");
    return 0;
}