//¾ØÕóÔªËØ¶¨Î»
#include<stdio.h>
int main()
{
    int a[15][15];
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&n,&m);
    printf("%d\n",a[n-1][m-1]);
    return 0;
}
