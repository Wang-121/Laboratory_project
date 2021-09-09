//有序序列插入一个整数
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x<a[i])
        {
            for(j=n;j>i;j--)
                a[j]=a[j-1];
            break;
        }
    }
    a[i]=x;
    for(i=0;i<n+1;i++)
        printf("%d ",a[i]);
    return 0;
}
