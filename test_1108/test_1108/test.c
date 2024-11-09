#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


void get_nextval(char a[], int nextval[])
{
	int n = 0;
	int i = 0;
	nextval[1] = 0;
	if(a[1]==a[2])
	{
		nextval[2] = 0;
	}
	else
	{
		nextval[2] = 1;
	}
	int length = strlen(a + 1);
	for (n = 3; n <= length; n++)
	{
		int i = 2, j = 1, k = i;
		while (k < n)
		{
			if (a[j] == a[k])
			{
				k++, j++;
				if (k == n && a[n] == a[j])
				{
					j = 1;
					i++;
					k = i;
				}
			}
			else
			{
				j = 1;
				i++;
				k = i;
			}
		}
		if (j == 1 && a[i] == a[1])
			nextval[n] = 0;
		else
		{
			nextval[n] = j;
		}
	}

}

int getIndex_KMP(char a[], char b[], int nextval[])
{
	int i = 1, j = 1;
	int a_length = strlen(a + 1);
	int b_length = strlen(b + 1);
	while (i <= b_length && j <= a_length)
	{
		if (a[j] == b[i] || j == 0)
		{
			i++;
			j++;
		}
		else
		{
			j = nextval[j];
		}
	}
	if (j != 0)
	{
		return i - a_length;
	}
	else
	{
		return 0;
	}

}
int main()
{
	char a[10] = { 0 };
	char b[100] = { 0 };
	int nextval[10] = { 0 };
	scanf("%s", &a[1]);
	scanf("%s", &b[1]);
	get_nextval(a, nextval);
	int length = strlen(a + 1);
	int index = getIndex_KMP(a, b, nextval);	
	int i = 0;

	printf("%d\n", index);
	for (i = 1; i <= length; i++)
	{
		printf("%d ", nextval[i]);
	}


	return 0;
}