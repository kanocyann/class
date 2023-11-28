#include <stdio.h>
#include <stdbool.h>
#define n 5
#define N 100
bool isprime (int num);
int main(void)
{
    int count = 0;
    printf("素数有：\n");
    for (int i = 1; i <= N; i++)
         {
            if (isprime(i))
                {
                    printf("%8d ", i);
                    count++;
                    if (count % n == 0)
                        {
                            printf("\n");
                        }
                }
         }
}
bool isprime (int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
         {
            if (num % i == 0)
                {
                    return false;
                }
         }
    return true;
}
            
