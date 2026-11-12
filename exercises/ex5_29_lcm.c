/* 5.29 最小公倍數 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b);

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("LCM is %d\n", lcm(a, b));

    system("pause");
    return 0;
}

int lcm(int a, int b)
{
    int i;

    /* 從比較大的數開始往上找，第一個能同時被 a 和 b 整除的就是答案 */
    if (a > b)
    {
        i = a;
    }
    else
    {
        i = b;
    }

    while (i % a != 0 || i % b != 0)
    {
        i++;
    }

    return i;
}
