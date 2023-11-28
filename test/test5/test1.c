#include <stdio.h>
#define N 9
void read(int num[]);
void print(int num[]);
void select(int num[], int (*compare)(int a, int b));
int ascend(int a, int b);
int descend(int a, int b);
void swap(int *x, int *y);
int main(void)
{
    int num[N], order;
    printf("输入你要排序的十个数字:");
    read(num);
    printf("输入你想要的模式[正序(1)|倒序(2)]:  ");
    scanf("%d", &order);
    printf("排序的结果是:");
    if (order == 1)
    {
        select(num, ascend);
        printf("正序排列是:");
    }
    else
    {
        select(num, descend);
        printf("倒序排列是:");
    }
    print(num);
    return 0;
}
//函数功能:读入数据
void read(int num[])
{
    for (int i=0; i<=N; i++)
    {
         scanf("%d", &num[i]);
    }
}
//函数功能:输出数据
void print(int num[])
{
    for (int i=0; i<=N; i++)
    {
         printf("%d ", num[i]);
    }
    printf("\n");
}
//函数功能:调用函数指针选择排序方式
void select(int num[], int (*compare)(int a, int b))
{
    int i, j, k;
    for (i=0; i<N-1; i++)
    {
        k = i;
        for (j=i+1; j<=N; j++)
        {
            if ((*compare)(num[j], num[k])) k = j;
        }
    if (k != i)  swap(&num[k], &num[i]);
    }
}
//函数功能:根据选择的模式排序
int ascend(int a, int b)
{
    return a < b;
}
int descend(int a, int b)
{
    return a > b;
}
//函数功能:交换数组中元素的值
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
