#include <stdio.h>
int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    int res = 0;
    while(1)
    {
        res += n - n % k;
        n = n / k + n % k;
        if(n < k)
        {
            res += n;
            break;
        }
    }
    printf("%d\n", res);
}
