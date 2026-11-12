/* P21: 用 srand(seed) 給 rand() 種子，不同種子會產生不同的亂數序列 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    unsigned seed;

    printf("Enter seed:");
    scanf("%u", &seed);

    srand(seed); /* 設定亂數種子 */

    for (i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
