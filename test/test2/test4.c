#include <stdio.h>
#include <math.h>
int main(void)
{
   double s, area;
   int a, b, c;
   printf("请输入三角形的三条边a、b、c:\n");
   scanf("%d%d%d", &a, &b, &c);
   if (a+b>c && a+c>b && b+c>a)
     {
        s = 1.0 / 2 * (a+b+c);
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("面积是%.2lf\n", area);
     }
   else 
     {
        printf("不是三角形\n");
     }
   return 0;
}
