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
double ret(double num1, int num2, char ch);
bool Judge(double c, double r);
int main(void)
{
    int num2, right=0;
    char ch;
    double calcu, num1, r, rate;
    srand(time(NULL));
    do {
          for (int i=1; i <= times; i++)
            {
                ch = Slct();
                num1 = Makenum();
                num2 = Makenum();
                printf("%.0lf%c%d=?\n", num1, ch, num2);
                scanf("%lf", &calcu);
                r = ret(num1, num2, ch);
                if (Judge(calcu, r))
                    {
                        printf("你答对了!\n");
                        right++;
                    }
                else 
                    {
                        printf("你答错了\n");
                    }
            }
         rate = ((double)right/times)*100;
         printf("你答对了%d题,正确率是%.0lf%%,", right, rate);
         if (right < 8)
            {
                printf("正确率小于75%%,再来一次吧!\n");
                right = 0;
            }
         else 
            {    
                printf("恭喜你达到目标!\n");
                exit (0);
            }
       }while(right < 8);
}
//函数功能：随机生成数字
int Makenum(void)
{
    int num;
    num = (rand() % Max + Min);
    return num;
}
//函数功能：布尔型函数决断输入结果的正误
bool Judge(double c, double r)
{
    if (fabs(c-r)<=EPS)   return true;
    else          return false;
}
//函数功能：随机选择四则运算的符号
char Slct(void)
{
    char ch = "+-*/"[rand() % 4];
    return ch;
}
//函数功能：计算随机生成的四则运算结果
double ret (double num1, int num2, char ch)
{
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
