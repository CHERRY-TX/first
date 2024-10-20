#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define a(x,y) ((x)*(y))
#include"game.h"

void game()
{
    char board[ROW][COL] = { 0 };
    InitBoard(board, ROW, COL);
    srand((unsigned int)time(NULL));
    while (1)
    {
        DisplayBoard(board, ROW, COL);
        PlayerMove(board, ROW, COL);
        if (JudgeP(board, ROW, COL))
        {
            DisplayBoard(board, ROW, COL);
            break;
        }
        ComputerMove(board, ROW, COL);
        if (JudgeC(board, ROW, COL))
        {
            DisplayBoard(board, ROW, COL);
            break;
        }
    }

}

void menu()
{
    printf("************************\n");
    printf("*****1.play  0.exit*****\n");
    printf("************************\n");
    printf("请选择：>");
}
int main() {
    int intput = 0;
    do {
        menu();
        scanf("%d", &intput);
        switch (intput)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (intput);






    return 0;
}

