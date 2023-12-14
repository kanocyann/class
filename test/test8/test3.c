#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 50
#define NUM_STRINGS 10
void sortStrings(char *strings[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (strcmp(strings[i], strings[j]) > 0)
            {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}
int main(void) 
{
    char strings[NUM_STRINGS][MAX_STRING_LENGTH];
    char *pointers[NUM_STRINGS];
    printf("请输入十个字符串:\n");
    for (int i=0; i<NUM_STRINGS; i++)
    {
        scanf("%s", *(strings+i));
        pointers[i] = strings[i];
    }
    sortStrings(pointers, NUM_STRINGS);
    printf("\n排序后的字符串:\n");
    for (int i=0; i<NUM_STRINGS; i++)
    {
        printf("%s\n", pointers[i]);
    }
    return 0;
}
