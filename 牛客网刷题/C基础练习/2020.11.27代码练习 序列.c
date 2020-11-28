//有序序列插入一个数
#include<stdio.h>
int main()
{
    int n,a[55],i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    getchar();
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(t<a[i])
        {
            for(j=n;j>i;j--)
            {
                a[j]=a[j-1];
            }
            break;
        }
    }
    a[i]=t;
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
