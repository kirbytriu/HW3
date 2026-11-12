/* P12: 使用者自訂函式 square，印出 1~10 的平方 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int square(int y); /* 函式宣告 (prototype) */

int main(void)
{
    int x;

    for (x = 1; x <= 10; x++)
    {
        printf("%d ", square(x));
    }
    printf("\n");
    system("pause");
    return 0;
}

/* 函式定義: 回傳 y 的平方 */
int square(int y)
{
    return y * y;
}
