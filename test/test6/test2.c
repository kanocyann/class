#include <stdio.h>
void read(int num[], int N);
void Swap(int num[], int N, int *min, int *max);
void print(int num[], int N);
int main(void)
{
    int num[10];
    int min, max;
    read(num, 10);
    Swap(num, 10, &min, &max);
    print(num, 10);
    return 0;
}
void read(int num[], int N)
{
    printf("输入10个整数：\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
}
void Swap(int num[], int N, int *min, int *max)
{
    *min = *max = num[0];
    for (int i = 1; i < N; i++)
    {
        if (num[i] < *min)
        {
            *min = num[i];
        }
        else if (num[i] > *max)
        {
            *max = num[i];
        }
    }
    int temp = num[0];
    num[0] = *min;
    *min = temp;

    temp = num[N - 1];
    num[N - 1] = *max;
    *max = temp;
}
void print(int num[], int N)
{
    printf("更新后的数组：\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}
