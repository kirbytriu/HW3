/* P27: 用遞迴計算階乘 n! = n * (n-1)! */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long factorial(long number);

int main(void)
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("%2d! = %ld\n", i, factorial(i));
    }
    system("pause");
    return 0;
}

long factorial(long number)
{
    if (number <= 1) /* 終止條件: 0! = 1! = 1 */
    {
        return 1;
    }
    else /* 遞迴步驟 */
    {
        return (number * factorial(number - 1));
    }
}
