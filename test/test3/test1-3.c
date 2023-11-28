#include <stdio.h>
#define N 9
int main(void)
{
    for (int i=1; i<=N; i++)
         {
            for (int k=N-i; k>0; k--)
                {
                    char *src = "    ";
                    printf("%s", src);
                }
            for (int j=1; j<=i; j++)
                {
                    printf("%dX%d=%2d  ", j, i, i*j); 
                }
            printf("\n");
         }
}

