/* 5.36 河內塔 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int from, int to, int temp);

int main(void)
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);
    hanoi(n, 1, 3, 2);

    system("pause");
    return 0;
}

/* 把 n 個盤子從 from 搬到 to，temp 是暫時放的柱子 */
void hanoi(int n, int from, int to, int temp)
{
    if (n == 1)
    {
        printf("%d -> %d\n", from, to);
    }
    else
    {
        hanoi(n - 1, from, temp, to);
        printf("%d -> %d\n", from, to);
        hanoi(n - 1, temp, to, from);
    }
}
