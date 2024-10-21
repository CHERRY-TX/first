#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int get(int a, int b, int c)
//{
//    if (a < b)
//    {
//        int count = 0;
//        count = a;
//        a = b;
//        b = count;
//    }
//    if (a < c)
//    {
//        int count = 0;
//        count = a;
//        a = c;
//        c = count;
//    }
//    if (b + c <= a)
//    {
//        printf("Not a triangle!\n");
//        return 0;
//    }
//
//    if (a == b && b == c)
//    {
//        printf("Equilateral triangle!\n");
//        return 1;
//    }
//
//
//    if (a == b || a == c || b == c)
//    {
//        printf("Isosceles triangle!\n");
//        return 1;
//    }
//    printf("Ordinary triangle!\n");
//    return 1;
//}
//
//int main() {
//    int a = 0, b = 0, c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        get(a, b, c);
//    }
//    return 0;
//}

int get(int a,int n)
{
	if (n < 1)
		return 0;
	int i = 1, count = 0, k = a;
	for (i = 1; i <= n; i++)
	{
		count = count + k;
		k = 10 * k;
	}
	return get(a, n - 1) + count;
}

int main()
{
	int n = 0, a = 0;
	scanf("%d %d",&a,&n);
	printf("%d\n",get(a,n));
	return 0;

}
