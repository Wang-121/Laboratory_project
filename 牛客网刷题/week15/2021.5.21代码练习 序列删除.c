//序列中删除指定数字
#include <stdio.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    int a[100];
    for(int i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }
    int m;
    scanf("%d",&m);

    for(int j=0; j<n; j++)
    {
        if(a[j]!=m)
        {
            a[t++]=a[j];
        }
    }

    for(int i=0; i<t; i++)
    {
        printf("%d ",a[i]);
    }

}
