#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#define N 3
bool answer(int a, int b);
int main(void)
{
    int a, b, right, ans;
    for (int i=0; i<N; i++)
    {
        srand(time(NULL));
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        right = a * b;
        printf("%d*%d=?\n", a, b);
        printf("Input your answer: ");
        scanf("%d", &ans);
        if(answer(ans, right))
        {
            printf("Congratulation!You are right!\n");
            exit(0);
        }
        else   printf("Wrong!");
    }
    printf("Wrong!You have tried three times!Test over!\n");
    return 0;
}
bool answer(int a, int b)
{
    if (a == b)   return true;
    else  return false;
}
