//Í¼ÏñÏàËÆ¶È
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d\n",&m,&n);
    int a[m][n],b[m][n];
    int i,j,t=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d ",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d ",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])
            {
                t++;
            }
        }
    }
    float T=(t*100.00)/(m*n);
    printf("%.2f",T);
}
