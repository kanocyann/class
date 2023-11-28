#include <stdio.h>
void allprime(int num);
int main(void)
{
    int num;
    printf("输入你想算的数字:");
    scanf("%d", &num);
    printf("%d = ", num);
    allprime(num);
    return 0;
}
//函数功能:找到num的所有的指数因子
void allprime(int num)
{
    int k = 2;
    for(; num >= k;)
    {
        if (num % k == 0)
        {
            if (k==num)
            {
                printf("%d", k);
            }
            else 
            {
                printf("%d*", k);
            }
            num /= k;
        }
        else
        {
            k++;
        }
    }
    printf("\n");
}
