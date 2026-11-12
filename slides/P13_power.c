/* P13: 計算 x 的 n 次方, double Power(double x, int n) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double Power(double, int); /* 宣告時可以省略參數名稱 */

int main(void)
{
    int k;
    double Ans;

    printf("Compute 3.5 to the power of k. Enter k = ");
    scanf("%d", &k);
    Ans = Power(3.5, k);
    printf("3.5 to the power of %d = %f\n", k, Ans);
    system("pause");
    return 0;
}

/* 用迴圈把 X 連乘 n 次 */
double Power(double X, int n)
{
    int i;
    double PowerXn = 1;

    for (i = 1; i <= n; i++)
        PowerXn = PowerXn * X;
    return PowerXn;
}
