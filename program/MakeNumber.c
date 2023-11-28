#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "MakeNumber.h"
int MakeNumber(void)
{
   int number;
   number = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
   assert (number >= MIN_NUMBER && number <= MAX_NUMBER);
   return number;
}
