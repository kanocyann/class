#include <stdio.h>
#define N 3
void Read(int *p);
int Calcu(int *p);
void Print(int *p, int sum);
int main(void)
{
    int sum = 0; int num[N][N];
    Read(*num);
    sum = Calcu(*num);
    Print(*num, sum);
    return 0;
}
void Read(int *p)
{
    printf("输入3*3方阵的元素值: ");
    for (int i=0; i<N; i++)
    {
         for (int j=0; j<N; j++)
         {
              scanf("%d", &p[i*N+j]);
         }
    }
}
int Calcu(int *p)
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
void Print(int *p, int sum)
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
