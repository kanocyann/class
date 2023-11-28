#include <stdio.h>
void print(int rows);
int main(void)
{
    int rows;
    printf("请输入杨辉三角形的行数: ");
    scanf("%d", &rows);
    print(rows);
    return 0;
}
void print(int rows)
{
    int coeff = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("   ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coeff = 1;
            else
                coeff = coeff * (i - j + 1) / j;
            printf("%6d", coeff);
        }
        printf("\n");
    }
}
