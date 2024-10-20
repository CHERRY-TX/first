#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col, char a)
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = a;
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	printf("-----ɨ����Ϸ-----\n");
	for (j = 0; j < COL - 1; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i < ROW - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < COL - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char board[ROW][COL], int row, int col)
{
	int i = 0, x = 0, y = 0;
	srand((unsigned int)time(NULL));
	for (i = 1; i <= MineNum; i++)
	{
		do
		{
			x = (rand() % (ROW-2)) + 1;
			y = (rand() % (COL-2)) + 1;
		} while (board[x][y] == '1');
		board[x][y] = '1';
	}
}

int Check(char mine[ROW][COL], char show[ROW][COL])
{
	int x = 0, y = 0, z = 0;
	printf("������Ҫ�Ų�����->");
	do
	{
		z = 0;
		scanf("%d %d", &x, &y);
		if (x > ROW - 2 || x<1 || y>COL - 2 || y < 1)
		{
			printf("�Ƿ����꣬����������->");
			z = 1;
		}
		else if (show[x][y] != '*')
		{
			printf("�Ѿ���飬����������->");
			z = 1;
		}

	} while (z);
	if (mine[x][y] == '1')
	{
		show[x][y] = '!';
		printf("���ף���Ϸʧ��\n");
		return 0;
	}
	int i = 0, j = 0;
	char k = '0';
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				k++;
		}
	}
	show[x][y] = k;
	for (i = 1; i <= ROW - 2; i++)
	{
		for (j = 1; j <= COL - 2; j++)
		{
			if (show[i][j] == '*' && mine[i][j] != '1')
				return 1;
		}
	}
	printf("��Ϸʤ��\n");
	return 0;


}