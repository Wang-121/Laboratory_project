//最高身高
#include<stdio.h>
int main()
{
    int n,m,i,j,x,y;
    int a[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[x][y]<a[i][j])
            {
                x=i;
                y=j;
            }
        }
    }
    printf("%d %d",x+1,y+1);
    return 0;
}
