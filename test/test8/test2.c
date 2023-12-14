#include <stdio.h>
#define N 3
void Trans(int (*p)[N])
{
    int temp;
    for (int i=0; i<N; i++)
    {
         for (int j=i+1; j<N; j++)
         {
             temp = *(*(p+i)+j);
             *(*(p+i)+j) = *(*(p+j)+i);
             *(*(p+j)+i) = temp;
         }
    }
    printf("转置结果是: \n");
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            printf("%d ", *(*(p+i)+j));
        }
        printf("\n");
    }
}
int main(void)
{
    int motrix[N][N];
    printf("请输入要转置的矩阵: \n");
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            scanf("%d", (*(motrix+i)+j));
        }
    }
    Trans(motrix);
    return 0;
}
