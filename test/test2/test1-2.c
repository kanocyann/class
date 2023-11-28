#include <stdio.h>

int main(void)
{
    int numbers[3];

    printf("请输入a, b, c\n");
    for (int i = 0; i < 3; i++)
         {
           scanf("%d", &numbers[i]);
         } 
    
    // 使用冒泡算法从小到大排序
    for (int i = 0; i < 2; i++)
         {
            for (int j = 0; j < 2 - i ; j++)
                {
                   if (numbers[j] > numbers[j + 1])
                       {
                          int temp = numbers[j];
                          numbers[j] = numbers[j + 1];
                          numbers[j + 1] = temp;
                       }
                }
         }
    printf("从小到大的顺序是：%d %d %d\n", numbers[0], numbers[1], numbers[2]);
    
    return 0;
}
