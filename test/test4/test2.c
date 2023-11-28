#include <stdio.h>
#include <stdlib.h>
int iteration(int n, int t);
int recursive(int n);
int main(void)
{
    int n, mode, ret, t=1;
    printf("输入阶乘的阶数:");
    scanf("%d", &n);
    printf("请选择算法1(迭代)或2(递归):");
    scanf("%d", &mode);
    if (mode == 1)      ret = iteration(n, t);
    else if (mode == 2) ret = recursive(n);
    else 
        {
            printf("不支持的算法!\n");
            exit (0);
        }
    printf("结果是:%d\n", ret);
    return 0;
}
int iteration(int n, int t)
{
    for (int i=1; i<=n; i++)
         {
            t *= i;
         }
    return t;
}
int recursive(int n)
{
    if (n < 0)   return -1;
    else if (n == 0 || n == 1)     return 1;
    else       return (n*recursive(n-1));
}
