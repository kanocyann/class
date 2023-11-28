#include "endian.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 9
#define EPS 1e-2
#define Min 1
#define times 10
int Makenum(void);
char Slct(void);
double ret(void);
void Opinion(int *p);
void Judge(double c, double r, int *p);
int main(void)
{
    int right = 0;
    double calcu, r, rate;
    srand(time(NULL));
    do {
           printf("请输入计算结果,75分以上合格(每题10分,共10题)\n");
           for (int i=1; i <= times; i++)
           {
               r = ret();
               rate = scanf("%lf", &calcu);
               while (rate != 1)
               {
                    while(getchar()!='\n');
                    printf("非法输入!请重新作答!\n");
                    rate = scanf("%lf", &calcu);
               }
               Judge(calcu, r, &right);
           }
           rate = ((double)right/times)*100;
           printf("你答对了%d题,正确率是%.0lf%%,", right, rate);
           Opinion(&right);
       }while(right < 8);
    return 0;
}
//函数功能：随机生成数字
int Makenum(void)
{
    int num;
    num = (rand() % Max + Min);
    return num;
}
//函数功能：决断输入结果的正误
void Judge(double c, double r, int *p)
{
    if (fabs(c-r)<=EPS)
    {
        printf("你答对了!\n");
        *p += Min;
    }
    else  
    {
        printf("你答错了!\n");
    }
        
}
//函数功能：随机选择四则运算的符号
char Slct(void)
{
    char ch = "+-*/"[rand() % 4];
    return ch;
}
//函数功能：计算随机生成的四则运算结果
double ret(void)
{
    char ch; double num1; int num2;
    ch = Slct();
    num1 = Makenum();
    num2 = Makenum();
    printf("%.0lf%c%d=?\n", num1, ch, num2);
    double c;
    switch(ch)
        {
            case '+':
                c = num1 + num2;
                break;
            case '-':
                c = num1 - num2;
                break;
            case '*':
                c = num1 * num2;
                break;
            case '/':
                c = num1 / num2;
                break;
        }
    return c;
}
void Opinion(int *p)
{
    if (*p < 8)
    {
        printf("正确率小于75%%,再来一次吧!\n");
        *p = 0;
    }
    else
    {
        printf("恭喜你达到目标!\n");
        exit (0);
    }
}
