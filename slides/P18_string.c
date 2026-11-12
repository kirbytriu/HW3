/* P18: 使用 <string.h> 的 strcpy() 與 strlen() */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char string1[60] = "Welcome";
    char string2[60];

    int len;

    strcpy(string2, string1); /* 把 string1 的內容複製到 string2 */
    printf("string2 = %s\n", string2);

    len = (int)strlen(string2); /* 計算 string2 的長度 */
    printf("String length is %d\n", len);

    system("pause");
    return 0;
}
