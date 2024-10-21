#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
//int get(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 0)
//		return 0;
//	return n - n % 2 + get(n / 2 + n % 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", get(n));
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0, a = 0, b = 0;
//	scanf("%d", &n);
//	b = n;
//	a = n;
//	while (b != 1)
//	{
//		a = a + b / 2;
//		b = b / 2 + b % 2;
//
//	}
//	printf("%d", a);
//
//
//	return 0;
//}


//最大公约数加最小公倍数
//int main()
//{
//	long long a = 0, b = 0;
//	while (scanf("%lld %lld", &a, &b) == 2)
//	{
//		long long t = 0, m = a, n = b, max = 0, min = 0;
//		while (m % n)
//		{
//			t = n;
//			n = m % n;
//			m = t;
//		}
//		max = n;
//		min = a * b / max;
//		printf("%lld", min + max);
//
//	}
//	return 0;
//}
//
//
//
//	return 0;
//}


//将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
//int main() {
//    char a[100] = { 0 };
//    while (gets(a) != EOF)
//    {
//        int right = strlen(a) - 1, left = right;
//        int i = left;
//        for (left = right; left > 0; left--)
//        {
//            if (a[left - 1] == ' ')
//            {
//                for (i = left; i <= right; i++)
//                {
//                    printf("%c", a[i]);
//                }
//                right = left - 2;
//                printf(" ");
//            }
//        }
//        for (i = 0; i <= right; i++)
//        {
//            printf("%c", a[i]);
//        }
//        printf(" ");
//
//    }
//    return 0;
//}