#include <stdio.h>
int main(void)
{
  int a, b, c;
  printf("Please input a, b, c:\n");
  scanf("%d%d%d", &a, &b, &c);
  
  if (a > b)
   {
      int temp = a;
      a = b;
      b = temp;
   }
  if (a > c)
   {
      int temp = a;
      a = c;
      c = temp;
   }
  if (b > c)
   {
      int temp = b;
      b = c;
      c = temp;
   }

   printf("From small to big:%d %d %d\n", a, b, c);
   return 0;
}
