#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 9
int Radm(int num[]);
int Ascend(int a, int b);
int Descend(int a, int b);
void Select(int num[], int (*compare)(int a, int b));
void Newnum(int order, int num[]);
void Swap(int *x, int *y);
int main(void)
{
    int order, num[N];
    srand(time(NULL));
    order = Radm(num);
    Newnum(order, num);
    return 0;
}
int Radm(int num[])
{
    int n, order;
    for (int i=0; i<N; i++)
    {
        num[i] = rand()%100+1;
    }
    printf("输入你想要的模式[升序(1)|降序(2)]:  ");
    scanf("%d", &order);
    while(1)
    {
        if (order == 1)
        {
            Select(num, Ascend);
            break;
        }
        else if(order == 2)
        {
            Select(num, Descend);
            break;
        }
        else
        {
            printf("你输错了!\n");
            printf("重新输入你想要的模式[升序(1)|降序(2)]:  ");
            scanf("%d", &order);
        }
    }
    return order;
}
void Select(int num[], int (*compare)(int a, int b))
{
    int i, j, k;
    for (i=0; i<N-1; i++)
    {
        k = i;
        for (j=i+1; j<=N-1; j++)
        {
            if ((*compare)(num[j], num[k])) k = j;
        }
        if (k != i)     Swap(&num[k], &num[i]);
    }
}
int Ascend(int a, int b)
{
    return a < b;
}
int Descend(int a, int b)
{
    return a > b;
}
void Newnum(int order, int num[])
{
    int n, i, j;
    printf("请输入一个数: ");
    scanf("%d", &n);
    if (order == 1)
    {
        for (i=0; i<N; i++)
        {
             if (num[i]>n)      break;
        }
        for (j=N-1; j>=i; j--)
        {
             num[j+1] = num[j];
        }
        num[i] = n;
    }
    else
    {
        for (i=0; i<N; i++)
        {
            if (num[i]<n)       break;
        }
        for (j=N-1; j>=i; j++)
        {
            num[j+1] = num[j];
        }
        num[i] = n;
    }
    for (i=0; i<=N; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}
void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
