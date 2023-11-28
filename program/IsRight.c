#include <stdio.h>
#include "IsRight.h"
int IsRight(int number, const int guess)
{
   if (guess < number)
   {
      printf("Wrong!Too small!\n");
      return 0;
   }
   else if (guess > number)
   {
      printf("Wrong!Too big!\n");
      return 0;
   }
   else 
      return 1;
}
