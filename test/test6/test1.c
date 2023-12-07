#include <stdio.h>
void Swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
int main(void)
{
    int a, b;
    printf("输入a的值: ");
    scanf("%d", &a);
    printf("输入b的值: ");
    scanf("%d", &b);
    printf("交换之前是:a = %d, b = %d   ", a, b);
    Swap(&a, &b);
    printf("交换之后是:a = %d, b = %d\n", a, b);
    return 0;
}
