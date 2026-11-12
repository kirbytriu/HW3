/* 5.28 大小寫轉換 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char changeCase(char c);

int main(void)
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    printf("%c\n", changeCase(ch));

    system("pause");
    return 0;
}

char changeCase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32; /* 大寫變小寫 */
    }
    else
    {
        return c - 32; /* 小寫變大寫 */
    }
}
