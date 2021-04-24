//空心正方形图案
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                if(j==1||i==1||i==n||j==n)
                    printf("* ");
                else
                    printf("  ");
            printf("\n");
        }
    }
}
