#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//空心正方形图案
////https://www.nowcoder.com/practice/72347ee949dc47399186ee183632f303
//int main() {
//    int n = 0;
//    int i = 0, j = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if ((i == 0) || (i == n - 1) || (j == 0) || (j == n - 1))
//                {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
////}
// 
//金字塔图案
////https://www.nowcoder.com/practice/d84e8339f9444bb6b29bd3f227c8e538?tpId=290&tqId=309110&ru=/exam/oj&qru=/ta/beginner-programmers/question-ranking&sourceUrl=%2Fexam%2Foj
//int main() {
//    int n = 0;
//    int i = 0, j = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (i = 0; i < n; i++)
//        {
//            int ret = 1;
//            for (j = 0; j <= n + i - 1; j++)
//            {
//                if ((i + j) < n - 1)
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    if (ret == 1)
//                    {
//                        printf("*");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                    ret = ret * (-1);
//                };
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//翻转金字塔
//https://www.nowcoder.com/practice/c4775776e4464537bfb6a5ba37c596c6?tpId=290&tqId=309111&ru=/exam/oj&qru=/ta/beginner-programmers/question-ranking&sourceUrl=%2Fexam%2Foj
//
//int main() {
//    int n = 0;
//    int i = 0, j = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (i = 0; i < n; i++)
//        {
//            int ret = 1;
//            for (j = 0; j <= 2 * n - i - 2; j++)
//            {
//                if (i > j)
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    if (ret == 1)
//                    {
//                        printf("*");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                    ret = ret * (-1);
//                };
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//圣诞树
// //https://www.nowcoder.com/practice/9a03096ed8ab449e9b10b0466de29eb2?tpId=290&tqId=2337396&ru=/exam/oj&qru=/ta/beginner-programmers/question-ranking&sourceUrl=%2Fexam%2Foj

int main() {
    int n = 0;
    int i = 0, j = 0;
    while (scanf("%d", &n) == 1)
    {
        int m = 0;
        for (m = 0; m < n; m++)
        {
            for (i = 3 * m; i < 3 * (m + 1); i++)
            {
                int ret = 1;
                for (j = 0; j < 3 * n + i; j++)
                {
                    if (j < 3 * n - 1 - i)
                    {
                        printf(" ");
                    }
                    else {
                        int t = 0;
                        int count = 1;
                        for (t = 0; t <= m; t++)
                        {
                            if (((j - 6 * t) <= 3 * n - 1 + i - 6 * m) && ((j - 6 * t) >= 3 * n - 1 - i))
                            {
                                count = 0;
                                if (ret == 1)
                                {
                                    printf("*");
                                }
                                else {
                                    printf(" ");
                                }
                                ret = ret * (-1);
                                if ((j - 6 * t) == 3 * n - 1 + i - 6 * m)
                                {
                                    ret = 1;
                                }
                            }
                        }
                        if (count == 1)
                        {
                            printf(" ");
                        }
                    }
                }
                printf("\n");
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 3 * n - 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}