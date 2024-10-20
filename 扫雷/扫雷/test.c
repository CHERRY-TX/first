#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("****    1.play    ****\n");
	printf("****    0.exit    ****\n");
	printf("**********************\n");
}

void game()
{
	char mine[ROW][COL] = { 0 }, show[ROW][COL] = { 0 };
	int cet = 1;
	InitBoard(mine, ROW, COL, '0');
	InitBoard(show, ROW, COL, '*');
	Setmine(mine, ROW - 2, ROW - 2);
	//DisplayBoard(mine, ROW - 2, ROW - 2);
	DisplayBoard(show, ROW - 2, ROW - 2);
	while (cet)
	{
		cet = Check(mine, show);
		DisplayBoard(show, ROW - 2, ROW - 2);
	}
	DisplayBoard(mine, ROW - 2, ROW - 2);
		
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������->");
			break;
		}

	} while (input);


	return 0;
}