#include <stdio.h>
#include <assert.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    // Test Case 1: Typical case
    int a1[] = {-1, 0, 3, 5, 9, 12};
    assert(search(a1, 6, 9) == 4);

    // Test Case 2: Edge case (not found & single element)
    int a2[] = {-1, 0, 3, 5, 9, 12};
    assert(search(a2, 6, 2) == -1);
    int a3[] = {5};
    assert(search(a3, 1, 5) == 0);

    printf("06-binary-search: All tests passed!\n");
    return 0;
}