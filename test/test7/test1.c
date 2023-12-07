#include <stdio.h>
int Mystrcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 > *s2)
        {
            return 1;
        }
        else if (*s1 < *s2)
        {
            return -1;
        }
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0')
    {
        return 0;
    }
    else if (*s1 == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    char s1[100], s2[100];
    printf("输入第一个字符串 (S1): ");
    scanf("%s", s1);
    printf("输入第二个字符串 (S2): ");
    scanf("%s", s2);
    int result = Mystrcmp(s1, s2);
    printf("比较的结果是: %d\n", result);
    return 0;
}
