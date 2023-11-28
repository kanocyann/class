#include <stdio.h>
#define LENG 3
void Read(int num[][LENG]);
int Compete(int num[][LENG]);
void Print(int num[][LENG], int max);
int main(void)
{
    int max=0, num[LENG][LENG];
    printf("输入 3*3 矩阵数字:");
    Read(num);
    max = Compete(num);
    Print(num, max);
    return 0;
}
void Read(int num[][LENG])
{
    for (int i=0;i<LENG;i++)
    {
         for (int j=0;j<LENG;j++)
         {
             scanf("%d", &num[i][j]);
         }
    }
}
int Compete(int num[][LENG])
{
    int m=0, n=0;
    for (int i=0;i<LENG;i++)
    {
         for (int j=0;j<LENG;j++)
         {
             if (num[m][n]<num[i][j])
             {
                m = i;
                n = j;
             }
         }
    }
    return (m+1)*10+(n+1);
}
void Print(int num[][LENG], int max)
{
    for (int i=0; i<LENG;i++)
    {
        for (int j=0;j<LENG;j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    printf("最大数的位置是第%d行第%d列\n", (max-max%10)/10, max%10);
}
