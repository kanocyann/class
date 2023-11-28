#include <stdio.h>
#include "IsRight.h"
#include "IsValidNum.h"
void GuessNumber(int number)
{
   int guess;
   int count = 0;
   int right = 0;
   int ret;
   do
     {
        printf("Try %d:", count+1);
        ret = scanf("%d", &guess);
        while (ret != 1 || IsValidNum(guess))
          {
             printf("Input error!\n");
             while (getchar() != '\n');
             printf("Try %d:", count+1);
             ret = scanf("%d", &guess);
          }
        count++;
        right = IsRight(number, guess);
     }while(!right && count < MAX_TIMES);
     if (right)
        printf("Congratulations!You're so cool!\n");
     else
        printf("Mission failed after %d attempts.\n", MAX_TIMES);
}
