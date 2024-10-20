#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < ROW; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < ROW - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			int j = 0;
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("请输出坐标->");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && y <= COL && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else if ((x > 0 && x <= ROW && y > 0 && y <= COL) == 0)
			printf("非法坐标，请重新输入\n");
		else

			printf("已被占用，请重新输入\n");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int JudgeP(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	int count = 0;
	for (i = 0; i < (ROW); i++)
	{
		for (j = 0; j < (COL); j++)
		{
			if (board[i][j] != '*')
				continue;
			else
			{
				int z = 1;
				if (j < (COL - VIC + 1))
				{
					count = 1;
					for (z = 1; z < VIC; z++)
					{
						if (board[i][j + z] != '*')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
				if (i < (ROW - VIC + 1))
				{
					for (z = 1; z < VIC; z++)
					{
						count = 1;
						if (board[i + z][j] != '*')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
				if (i < (ROW - VIC + 1) && j < (COL - VIC + 1))
				{
					for (z = 1; z < VIC; z++)
					{
						count = 1;
						if (board[i + z][j + z] != '*')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
				if (j >= (VIC - 1) && i < (COL - VIC + 1))
				{
					for (z = 1; z < VIC; z++)
					{
						count = 1;
						if (board[i + z][j - z] != '*')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
			}
		}
	}
	int a = 1;
	for (i = 0; i < (ROW); i++)
	{
		for (j = 0; j < (COL); j++)
			if (board[i][j] == ' ')
				a = 0;
	}
	if (a == 1)
	{
		printf("游戏平局\n");
		return 1;
	}
	if (count == 1)
	{
	out:printf("游戏结束，玩家胜利\n");
		return 1;
	}
	return 0;
}

int JudgeC(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	int count = 0;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] != '#')
				continue;
			else
			{
				int z = 1;
				if (j < (COL - VIC + 1))
				{
					count = 1;
					for (z = 1; z < VIC; z++)
					{
						if (board[i][j + z] != '#')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
				if (i < (ROW - VIC + 1))
				{
					for (z = 1; z < VIC; z++)
					{
						count = 1;
						if (board[i + z][j] != '#')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
				if (i < (ROW - VIC + 1) && j < (COL - VIC + 1))
				{
					for (z = 1; z < VIC; z++)
					{
						count = 1;
						if (board[i + z][j + z] != '#')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
				if (j >= (VIC - 1) && i < (COL - VIC + 1))
				{
					for (z = 1; z < VIC; z++)
					{
						count = 1;
						if (board[i + z][j - z] != '#')
						{
							count = 0;
							break;
						}
					}
					if (count == 1)
						goto out;
				}
			}
		}
	}
	int a = 1;
	for (i = 0; i < (ROW); i++)
	{
		for (j = 0; j < (COL); j++)
			if (board[i][j] == ' ')
				a = 0;
	}
	if (a == 1)
	{
		printf("游戏平局\n");
		return 1;
	}
	if (count == 1)
	{
	out:printf("游戏结束，电脑胜利\n");
		return 1;
	}
	return 0;
}