#include <stdio.h>
int F[200],a[200],b[200],n,h,x;
int main()
{
    scanf("%d%d",&n,&h);
    for(int i=1;i<=n;i++) scanf("%d",&F[i]);//输入节点的类型
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);//输入掉血、回血、掉血
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);//输入经验、0、掉经验
    scanf("%d",&x);
    int flag=0;//进入命运所指节点的个数
    int up=0;//当前经验是多少
    for(int i=1;i<=n;i++)
    {
        if(F[i]==1)//如果当前节点为战斗节点
        {
            if(h<=a[i])//如果生命值低于所需生命
            {
                printf("PRECIOUS DAILY\n");
                return 0;
            }
            else
            {
                h-=a[i];
                up+=b[i];//
            }
        }
        else if(F[i]==2)//如果此时是安全屋
        {
            if(a[i+1]>a[i])//如果我下一个节点亏的话
            {
                i++;
            }
            else
            {
                h+=(a[i]-a[i+1]);//我直接打下一个节点
                i++;
            }
        }
        else//如果此时是命运所指
        {
            if(flag==0)
            {
                flag++;
                if(h<=a[i])//第一次进入扣生命
                {
                    printf("PRECIOUS DAILY\n");
                    return 0;
                }
                else
                {
                    h-=a[i];
                }
            }
            else//第二次进入
            {
                flag++;
                up-=b[i];//扣经验
                if(up<0) up=0;
            }
        }

        if(up>=100)//判断是否升级
        {
            up-=100;
            h+=x;//如果升级了
        }
    }
    if(flag==2)
    {
        printf("STELLA CAERULA\n");
    }
    else if(flag==1)
    {
        printf("PRICE OF PEACE\n");
    }
    else
    {
        printf("AGE OF THE SILENCE\n");
    }
}
