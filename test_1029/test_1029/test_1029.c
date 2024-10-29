#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//¾ØÕó×ªÖÃhttps://www.nowcoder.com/practice/351b3d03e410496ab5a407b7ca3fd841?tpId=290&tqId=39926&ru=/exam/oj
//int main() {
//    int a = 0, b = 0, i = 0, j = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &a, &b);
//    for (i = 0; i < a; i++)
//    {
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (j = 0; j < b; j++)
//    {
//        for (i = 0; i < a; i++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}   

//ÅÐ¶ÏÉÏÈý½Ç¾ØÕóhttps://www.nowcoder.com/practice/9a6786c28cdb45f9b991685f867b5d08?tpId=290&tqId=39924&ru=/exam/oj
//
//int main() {
//    int n = 0;
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int ret = 1;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                ret = 0;
//                goto out;
//            }
//        }
//    }
//out:
//    if (ret == 1)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//
//    return 0;
//}


//ÓÐÐòÐòÁÐÅÐ¶Ïhttps://www.nowcoder.com/practice/22e87f8a8d764a6582710f38d1b40c6e?tpId=290&tqId=39910&ru=/exam/oj
int main() {
    int n = 0;
    int arr[50] = { 0 };
    int i = 0;
    int a = 1;
    int b = 1;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            a = 0;
        }
        if (arr[i] < arr[i + 1])
        {
            b = 0;
        }
        if ((a || b) == 0)
        {
            break;
        }
    }
    if ((a || b) == 0)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");
    }

    return 0;
}