/* 5.35 Fibonacci (不用遞迴) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int n;

    /* a) */
    printf("Enter n: ");
    scanf("%u", &n);
    printf("fibonacci(%u) = %llu\n", n, fibonacci(n));

    /* b) 一直往下算，如果算出來比前一個還小就代表爆掉了 */
    n = 1;
    while (fibonacci(n + 1) >= fibonacci(n))
    {
        n++;
    }
    printf("largest: fibonacci(%u) = %llu\n", n, fibonacci(n));

    system("pause");
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int a = 0, b = 1, c;
    unsigned int i;

    if (n == 0)
    {
        return 0;
    }

    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
