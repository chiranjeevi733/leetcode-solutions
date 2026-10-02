#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int retSize;

    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int* res1 = twoSum(nums1, 4, 9, &retSize);
    assert(retSize == 2);
    assert(res1[0] == 0 && res1[1] == 1);
    free(res1);

    // Test Case 2: Edge case (duplicate numbers forming target)
    int nums2[] = {3, 3};
    int* res2 = twoSum(nums2, 2, 6, &retSize);
    assert(retSize == 2);
    assert(res2[0] == 0 && res2[1] == 1);
    free(res2);

    printf("01-two-sum: All tests passed!\n");
    return 0;
}