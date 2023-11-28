#include <stdio.h>
#include <math.h>
int func(int n, int x);
int main(void)
{
    int n, x, ret;
    printf("输入x和n的值:");
    scanf("%d %d", &x, &n);
    ret = func(n, x);
    if (ret == -1)   printf("输入的n值错误!\n");
    else printf("结果是:%d\n", ret);
    return 0;
}
int func(int n, int x)
{
    if (n == 0)   return 1;
    else if (n > 0)  return pow(x, n-1)*x;
    else  return -1;
}
