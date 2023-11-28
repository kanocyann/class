#include <stdio.h>
#include <stdlib.h>
int Factor(int n, int i);
void allprime(int n);
int main(void)
{
    int n;
    printf("输入你想算的数字:");
    scanf("%d", &n);
    printf("%d = ", n);
    allprime(n);
    return 0;
}
// 函数功能:找到n的最小质数因子
int Factor(int n, int i)
{
    if (n <= 1) 
    {
        return -1; // 如果n不再大于1，则没有质数因子了
    }
    if (n % i == 0)
    {
        return i; // i是n的质数因子
    }
    return Factor(n, i + 1); // 递归，继续查找下一个因子
}

// 函数功能:找到n的所有质数因子
void allprime(int n)
{
    int minfactor = Factor(n, 2);
    if (minfactor == -1) 
    {
        printf("\n");
        exit(0);
    } 
    else 
    {
        // 找到一个质数因子，打印出来，并递归查找剩余的因子
        printf("%d", minfactor);
        if (n / minfactor > 1)
        {
            printf("*");
        }
        allprime(n / minfactor);
    }
}
