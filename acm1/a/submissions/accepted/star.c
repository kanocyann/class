#include <stdio.h>
int F[200],a[200],b[200],n,h,x;
int main()
{
    scanf("%d%d",&n,&h);
    for(int i=1;i<=n;i++) scanf("%d",&F[i]);//����ڵ������
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);//�����Ѫ����Ѫ����Ѫ
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);//���뾭�顢0��������
    scanf("%d",&x);
    int flag=0;//����������ָ�ڵ�ĸ���
    int up=0;//��ǰ�����Ƕ���
    for(int i=1;i<=n;i++)
    {
        if(F[i]==1)//�����ǰ�ڵ�Ϊս���ڵ�
        {
            if(h<=a[i])//�������ֵ������������
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
        else if(F[i]==2)//�����ʱ�ǰ�ȫ��
        {
            if(a[i+1]>a[i])//�������һ���ڵ���Ļ�
            {
                i++;
            }
            else
            {
                h+=(a[i]-a[i+1]);//��ֱ�Ӵ���һ���ڵ�
                i++;
            }
        }
        else//�����ʱ��������ָ
        {
            if(flag==0)
            {
                flag++;
                if(h<=a[i])//��һ�ν��������
                {
                    printf("PRECIOUS DAILY\n");
                    return 0;
                }
                else
                {
                    h-=a[i];
                }
            }
            else//�ڶ��ν���
            {
                flag++;
                up-=b[i];//�۾���
                if(up<0) up=0;
            }
        }

        if(up>=100)//�ж��Ƿ�����
        {
            up-=100;
            h+=x;//���������
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
