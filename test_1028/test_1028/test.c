#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//int change(int n)
//{
//	if (n == 0)
//		return 0;
//	return n % 2 + 10*change(n / 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", change(a));
//	return 0;
//}

//输入描述：
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“ * ”的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用“ * ”组成的对应长度的直角三角形，每个“ * ”后面有一个空格。
//int main() {
//    int a = 0, b = 0;
//    while (scanf("%d", &a) == 1)
//    {
//        int i = 0, j = 0;
//        for (i = 1; i <= a; i++)
//        {
//            for (j = 1; j <= a; j++)
//            {
//                if (j < (a - i + 1))
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    printf("*");
//                }
//                printf(" ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、
//当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输
//入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
//
//#include <stdio.h>
//
//int main() {
//    float x = 0.0f;
//    int a = 0, b = 0, c = 0;
//    scanf("%f %d %d %d", &x, &a, &b, &c);
//    if (a == 11 && b == 11)
//    {
//        if (c == 1)
//        {
//            if ((x * 0.7) - 50.0 >= 0)
//            {
//                printf("%.2f\n", (x * 0.7) - 50);
//            }
//            else {
//                printf("%.2f", 0.0);
//            }
//        }
//        else
//            printf("%.2f\n", x * 0.7);
//    }
//    else if (a == 12 && b == 12)
//    {
//        if (c == 1)
//        {
//            if ((x * 0.8) - 50.0 >= 0)
//            {
//                printf("%.2f\n", (x * 0.8) - 50);
//            }
//            else {
//                printf("%.2f", 0.0);
//            }
//        }
//        else
//            printf("%.2f\n", x * 0.8);
//    }
//    else
//    {
//        printf("%.2f\n", x);
//    }
//
//    return 0;
//}

//左旋字符串里k的字符

void left_rotate(char* a, int k)
{
	char b = *a;
	char* m = a;
	while (k--)
	{
		b = *a;
		m = a;
		while (*++m)
		{
			*(m - 1) = *m;
		}
		*(m - 1) = b;
	}
}
int main()
{
	char a[] = "abcde";
	int k = 0;
	scanf("%d", &k);
	left_rotate(a, k);
	printf("%s\n", a);
	return 0;
}