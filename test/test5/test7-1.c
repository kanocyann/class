#include <stdio.h>
int input(int num);
void Sort(int numbers[], int num);
void print(int numbers[], int num);
int main(void)
{
    int num;
    num = input(num);
    int numbers[num];
    numbers[num] = 0;
    Sort(numbers, num);
    print(numbers, num);
    return 0;
}
int input(int num)
{    
    printf("输入要比较的个数n: ");
    scanf("%d", &num);
    printf("请输入n个数字: \n");
    return num;
}
void Sort(int numbers[], int num)
{
    for (int i = 0;  i < num; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < num; i++)
    {
         for (int j = 0; j < num - i ; j++)
         {
               if (numbers[j] > numbers[j + 1])
               {
                     int temp = numbers[j];
                     numbers[j] = numbers[j + 1];
                     numbers[j + 1] = temp;
               }
         }
    }
}
void print(int numbers[], int num)
{
    printf("从小到大的顺序是: ");
    for (int i = 1; i <= num; i++)     printf("%d ", numbers[i]);
    printf("\n");
}
