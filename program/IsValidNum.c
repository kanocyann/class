#include "IsValidNum.h"
int IsValidNum(int number)
{
   if (number >= MIN_NUMBER && number <= MAX_NUMBER)
      return 1;
   else 
      return 0;
}
