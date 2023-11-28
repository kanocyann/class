#include <stdio.h>
int main(void)
{
   char ch;
   printf("输入姓氏拼音首字母:\n");
   scanf(" %c", &ch);
   switch (ch)
     {
        case 'a':
           printf("安、艾\n");
           break;
        case 'b':
           printf("毕、白\n");
           break;
        case 'c':
           printf("陈、常\n");
           break;
        case 'd':
           printf("丁、党\n");
           break;
        case 'e':
           printf("鄂\n");
           break;
        default:
           printf("其它\n");
     }
   return 0;
}

