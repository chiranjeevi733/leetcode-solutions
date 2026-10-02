#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char topChar = stack[top--];
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                free(stack);
                return false;
            }
        }
    }
    bool result = (top == -1);
    free(stack);
    return result;
}

int main(void) {
    // Test Case 1: Typical case
    assert(isValid("()[]{}") == true);

    // Test Case 2: Edge case (unmatched brackets / empty stack check)
    assert(isValid("(]") == false);
    assert(isValid("[") == false);
    assert(isValid("([)]") == false);

    printf("08-valid-parentheses: All tests passed!\n");
    return 0;
}