//筛选法求素数
#include<stdio.h>
int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n");
    printf("%d ",n-count-1);
    return 0;
}
