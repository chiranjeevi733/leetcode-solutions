#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    // Test Case 1: Typical case
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1, 5);
    assert(s1[0] == 'o' && s1[1] == 'l' && s1[2] == 'l' && s1[3] == 'e' && s1[4] == 'h');

    // Test Case 2: Edge case (single element)
    char s2[] = {'a'};
    reverseString(s2, 1);
    assert(s2[0] == 'a');

    printf("02-reverse-string: All tests passed!\n");
    return 0;
}