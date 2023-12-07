#include <stdio.h>
void Mystrcat(char dest[], const char src[])
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
int main(void)
{
    char str1[50], str2[50];
    printf("输入第一个字符串: ");
    scanf("%s", str1);
    printf("输入第二个字符串: ");
    scanf("%s", str2);
    Mystrcat(str1, str2);
    printf("连接的结果是: %s\n", str1);
    return 0;
}
