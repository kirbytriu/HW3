/* P23: craps 擲骰子遊戲
 * 第一次擲: 7 或 11 -> 贏; 2、3、12 -> 輸;
 * 其他點數變成目標點數 (my point)，繼續擲到出現目標點數 (贏) 或 7 (輸)
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST }; /* CONTINUE=0, WON=1, LOST=2 */
int rollDice(void);

int main(void)
{
    int sum;
    int myPoint;

    enum Status gameStatus;

    srand((unsigned)time(NULL)); /* 用現在時間當種子，每次執行結果都不同 */
    sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }

    while (gameStatus == CONTINUE)
    {
        sum = rollDice();

        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else
        {
            if (sum == 7)
            {
                gameStatus = LOST;
            }
        }
    }

    if (gameStatus == WON)
    {
        printf("Player wins\n");
    }
    else
    {
        printf("Player loses\n");
    }

    system("pause");
    return 0;
}

/* 擲兩顆骰子，印出點數並回傳總和 */
int rollDice(void)
{
    int die1;
    int die2;
    int workSum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;

    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}
