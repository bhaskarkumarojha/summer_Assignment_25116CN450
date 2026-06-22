#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0, inWord = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    printf("Number of words = %d", words);

    return 0;
}