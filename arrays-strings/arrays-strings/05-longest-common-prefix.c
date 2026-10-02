#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char* prefix = (char*)malloc((strlen(strs[0]) + 1) * sizeof(char));
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
        if (j == 0) break;
    }
    return prefix;
}

int main(void) {
    // Test Case 1: Typical case
    char* words1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(words1, 3);
    assert(strcmp(res1, "fl") == 0);
    free(res1);

    // Test Case 2: Edge case (no common prefix)
    char* words2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(words2, 3);
    assert(strcmp(res2, "") == 0);
    free(res2);

    printf("05-longest-common-prefix: All tests passed!\n");
    return 0;
}