#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool isAnagram(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_s != len_t) return false;

    int count[26] = {0};
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main(void) {
    // Test Case 1: Typical case
    assert(isAnagram("anagram", "nagaram") == true);

    // Test Case 2: Edge case (different lengths / distinct strings)
    assert(isAnagram("rat", "car") == false);
    assert(isAnagram("a", "ab") == false);

    printf("03-valid-anagram: All tests passed!\n");
    return 0;
}