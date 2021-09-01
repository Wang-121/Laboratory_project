//有序序列插入一个数
#include<stdio.h>
int main()
{
    int t=0;
    int n;
    scanf("%d",&n);
    int s[50];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&s[i]);
    }
    int a;
    scanf("%d",&a);
    for(int i=0;i<n;i++)
        if(a>s[i])
            t++;
    for(int j=n;j>t;j--)
    {
        s[j]=s[j-1];
    }
    s[t]=a;
    for(int i=0;i<=n;i++)
        printf("%d ",s[i]);
    return 0;
}
