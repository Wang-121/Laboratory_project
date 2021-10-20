//¾ØÕóÏàµÈÅĞ¶¨
#include<stdio.h>
int main()
{
    int n,m,i,j,flag=1;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag=0;
            }
        }
    }
    if(flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
