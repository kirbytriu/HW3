/* 5.34 遞迴算次方 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int main(void)
{
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    system("pause");
    return 0;
}

int power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}
