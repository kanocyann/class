#include <stdio.h>
#include <stdlib.h>
int Victor(int *p, int N);
void Read(int *p, int N);
int Calcu(int *p, int N);
void Print(int *p, int N, int sum);
int main(void)
{
    int N, sum = 0, *p = NULL;
    N = Victor(p, N);
    Read(p, N);
    sum = Calcu(p, N);
    Print(p, N, sum);
    free(p);
    return 0;
}
int Victor(int *p, int N)
{
    printf("输入你想算的方阵阶数: ");
    scanf("%d", &N);
    p = (int *)malloc (N*N*sizeof(int));
    if (p == NULL)
    {
        printf("没有足够的内存!\n");
        exit(1);
    }
    return N;
}
void Read(int *p, int N)
{
    printf("输入%d*%d方阵的元素值: ", N, N);
    for (int i=0; i<N; i++)
    {
         for (int j=0; j<N; j++)
         {
              scanf("%d", &p[i*N+j]);
         }
    }
}
int Calcu(int *p, int N)
{
    int sum1=0, sum2=0;
    for (int i=0; i<N; i++)
    {
         sum1 += p[i*N+i];
    }
    for (int j=0; j<N; j++)
    {
         sum2 += p[j*N+(N-1-j)];
    }
    if (N%2 != 0)    return sum1+sum2-p[(N/2)*N+N/2];
    else             return sum1+sum2;
}
void Print(int *p, int N, int sum)
{
    for (int i=0; i<N; i++)
    {
         for (int j=0; j<N; j++)
         {
            printf("%d ", p[i*N+j]);
         }
         printf("\n");
    }
    printf("对角线的和是:%d\n", sum);
}
