#include <stdio.h>
#include <math.h>
#define Max 999
#define Min 100
int daffodils(int num);
int main(void)
{
    int ret;
    for (int i=Min; i<=Max; i++)
         {
            ret = daffodils(i);
            if (ret != -1)
                {
                    printf("%d ", ret);
                }
            printf("\n");
         }
}
int daffodils(int num)
{
    int sum = 0;
    int origin = num;
    while (origin > 0)
        {
            int temp;
            temp = origin % 10;
            sum += pow(temp, 3); 
            origin /= 10;
        }
    if (sum == num)  return num;
    else    return -1;
}
