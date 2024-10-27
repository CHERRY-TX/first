#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strcpy(char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char* p = str1;
	*str1 = *str2;
	while (*str2 != '\0')
	{
		*++str1 = *++str2;
	}
	return p;
} 
int main()
{
	char a[] = "abcdrf";
	char* p = "123";
	my_strcpy(a, p);
	puts(a);
	return 0;
}

