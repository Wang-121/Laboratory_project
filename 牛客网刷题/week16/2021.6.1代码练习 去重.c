//序列中整数去重
#include<stdio.h>
int main()
{
    int i,j,n;
    int a[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]^a[j])==0)
                a[j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
