#include <stdio.h>
#define N 9
int main(void)
{
    for (int i=1; i<=N ;i++)
         {
             for (int k=2; k<=i; k++) 
                  {
                      char *src = "        ";
                      printf("%s", src);
                  }
             for (int j=i; j<=N; j++)
                  {
                      printf("%2dX%d=%2d ", j, i, i*j); 
                  }
                printf("\n");
         }
}
