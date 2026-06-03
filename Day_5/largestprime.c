#include <stdio.h>

int main()
{
    long long n;
    long long largestFactor = 0;
    long long i;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largestFactor = i;
            n /= i;
        }
    }

    printf("Largest prime factor = %lld\n", largestFactor);

    return 0;
}