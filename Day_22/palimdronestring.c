#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        if (str[len] == '\n') {
            break;
        }
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("Palindrome string");
    } else {
        printf("Not a palindrome string");
    }

    return 0;
}