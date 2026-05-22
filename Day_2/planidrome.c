#include <stdio.h>

int main()
{
    int n, original, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
    {
        printf("Palindrome number\n");
    }
    else
    {
        printf("Not a palindrome number\n");
    }

    return 0;
}