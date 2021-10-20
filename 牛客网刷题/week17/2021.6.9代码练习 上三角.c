//…œ»˝Ω«æÿ’Û≈–∂®
#include<stdio.h>
int main()
{
    int n,i,j;
    int a[11][11];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                if(a[i][j]!=0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}
