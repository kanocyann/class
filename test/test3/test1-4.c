#include <stdio.h>
#define N 9
int main(void)
{
    for (int i=N; i>0; i--)
         {
            for (int k=i-1; k>0; k--)
                {
                    char str[]= "    ";
                    printf("%s", str);
                }
            for (int j=i; j<=N; j++)
                {
                    printf("%dX%d=%2d  ", i, j, i*j);
                }
            printf("\n");
        }
    return 0;
}
