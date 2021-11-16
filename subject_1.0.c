//输入 2 个正整数 a 和 n，求a+aa+aaa+aa...a(n 个 a)之和
#include<stdio.h>
int fn(int a, int n);
int main()
{
    int a, n, sum, i;
    sum = 0;
    printf("Input a:");
    scanf("%d", &a);
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + fn(a, i);
    }
    printf("sum=%d", sum);
    return 0;
}
int fn(int a, int n)
{
    int m, count, i, num, bai, z;
    m = a;
    num = 0;
    count = 0;
    bai = 1;
    while (1)
    {
        count++;
        m = m / 10;
        if (m == 0)
        {
            break;
        }
    }
    if (count != 1)
    {
        for (z = 1; z <= count; z++)
        {
            bai = bai * 10;
        }
        for (i = 1; i <= n; i++)
        {
            num = num * bai + a;
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            num = num * 10 + a;
        }
    }
    return num;
}