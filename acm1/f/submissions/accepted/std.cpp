#include<stdio.h>
int main()
{
    int n,m,hp;
    scanf("%d%d%d",&n,&m,&hp);
    if(m==0)
    {
        if(hp>2ll*n) printf("yes\n");
        else printf("no\n");
        return 0;
    }
    if(m+hp>n) printf("yes\n");
    else printf("no\n");
}
