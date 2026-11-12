/* P20: 擲六面骰子 20 次，1 + (rand() % 6) 會產生 1~6 的整數 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0) /* 每印 5 個換一行 */
        {
            printf("\n");
        }
    }

    system("pause");
    return 0;
}
