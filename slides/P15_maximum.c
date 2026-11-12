/* P15: 輸入三個整數，輸出最大值 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
    int number1;
    int number2;
    int number3;

    printf("Enter three integers:");
    scanf("%d %d %d", &number1, &number2, &number3);
    printf("Maximum is: %d\n", maximum(number1, number2, number3));
    system("pause");
    return 0;
}

/* 先假設 x 最大，再依序跟 y、z 比較 */
int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max)
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    return max;
}
