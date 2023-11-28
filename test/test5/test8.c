#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int input(int num[], int n);
int Selt(int num[], int n);
void list(int num[]);
void Swap(int *x, int *y);
void print(int num[], int res, int n);
int main(void)
{
    char user;
    int n, num[N], res;
    do
    {
        srand(time(NULL));
        n = input(num, n);
        res = Selt(num, n);
        print(num, res, n);
        getchar();
        printf("要继续吗?继续请输入(Y/y): ");
        scanf("%c", &user);
    }while(user=='Y'||user=='y'||user=='\n');
    return 0;
}
int input(int num[], int n)
{
    printf("请输入X的值: ");
    scanf("%d", &n);
    for (int i = 0; i<=N; i++)
    {
        num[i] = rand()%50+1;
    }
    return n;
}
int Selt(int num[], int n)
{
    list(num);
    int low = 0, high = N, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (n > num[mid])
            low = mid + 1;
        else if (n < num[mid])
            high = mid - 1;
        else return mid;
    }
    return -1;
}
void print(int num[], int res, int n)
{
    if (res == -1)
    {    
    printf("在数据");
    for (int i = 0; i<=N; i++)
         printf("%d ", num[i]);
    printf("中未找到%d\n", n);
    }
    else 
    {
        printf("在数据");
        for (int i = 0; i<=N; i++)
            printf("%d ", num[i]);
        printf("中找到数据%d\n", num[res]);
    }
}
void list(int num[])
{
    int i, j, k;
    for (i=0; i<=N-1; i++)
    {
        k = i;
        for (j=i+1; j<=N; j++)
        {
            if (num[j] < num[k]) k = j;
        }
        if (k != i)     Swap(&num[k], &num[i]);
    }
}
void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
