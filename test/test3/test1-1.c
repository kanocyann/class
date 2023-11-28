#include <stdio.h>
#define N 9
int main(void)
{
    for (int i = 1; i <= N; i++)
         {
           for (int j = 1; j <= i; j++)
               {
                  if (i==3 && j==2 || i==4 && j==2 || i == 4 && j==4)
                      printf("%dX%d=%d  ", j, i, i*j);
                  else
                      printf("%dX%d=%d ", j, i, i*j);
               }
           printf("\n");
         }
}
