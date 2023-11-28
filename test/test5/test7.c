#include <stdio.h>
int main(void)
{
    int num;
    printf("输入要比较的个数n: ");
    scanf("%d", &num);
    int numbers[num];
    numbers[num] = 0;
    printf("请输入n个数字: \n");
    for (int i = 0; i < num; i++)
    {
           scanf("%d", &numbers[i]);
    } 
    for (int i = 0; i <= num; i++)
    {
         for (int j = 0; j <= num - i ; j++)
         {
               if (numbers[j] > numbers[j + 1])
               {
                     int temp = numbers[j];
                     numbers[j] = numbers[j + 1];
                     numbers[j + 1] = temp;
               }
         }
    }
    printf("从小到大的顺序是: ");
    for (int i = 1; i <= num; i++)     printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
