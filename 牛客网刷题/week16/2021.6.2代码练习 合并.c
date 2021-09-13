//有序序列合并
#include<stdio.h>
int main()
{
    int n,m;
    int a=0,b=0,c=0;
    scanf("%d %d",&n,&m);
    int x[n],y[m],z[n+m];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&y[j]);
    }
    while(a<n && b<m)
    {
        if(x[a]<y[b])
            z[c++]=x[a++];
        else
            z[c++]=y[b++];
    }
    while(a<n)
    {
        z[c++]=x[a++];
    }
    while(b<m)
    {
        z[c++]=y[b++];
    }
    for(i=0;i<n+m;i++)
    {
        printf("%d ",z[i]);
    }
    return 0;
}
