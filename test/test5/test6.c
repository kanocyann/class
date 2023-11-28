#include <stdio.h>
#define N 9
void Print(int a[][N]);
int recur(int a[][N], int i, int j);
int main(void)
{
    int a[N][N] = {0};
    Print(a);
    return 0;
}
void Print(int a[][N])
{
    int i, j, k;
    for (i = 0; i <= N; i++)
    {
        for (k = 0; k <= N-i; k++)
        {
            printf("   ");
        }
        for (j = 0; j <= i; j++)
        {
            a[i][j] = recur(a, i, j);
            printf("%4d   ", a[i][j]);
        }
        printf("\n");
    }
}
int recur(int a[][N], int i, int j)
{
    if (i == j || j == 0) return 1;
    else     return recur(a, i-1, j-1)+recur(a, i-1, j);
}
