#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0, j = 0;
		for (i = 1; i <= 2*n+1; i++)
		{
			int z = 1;
			if (i <= n + 1)
			{
				for (j = 1; j <= n + i; j++)
				{
					if (j < (n - i + 2) )
						printf(" ");
					else
					{
						if (z == 1)
						{
							printf("*");
							z = z * (-1);
						}
						else
						{
							printf(" ");
							z = z * (-1);
						}
					}
						
				}
			}
			else
			{
				z = 1;
				for (j = 1; j <= 3 * n + 2 - i; j++)
				{
					if (j < (i - n))
						printf(" ");
					else
					{
						if (z == 1)
						{
							printf("*");
							z = z * (-1);
						}
						else
						{
							printf(" ");
							z = z * (-1);
						}
					}

				}
			}
			printf("\n");
		}
	}

	return 0;


}