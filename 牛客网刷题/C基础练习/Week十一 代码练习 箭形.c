//¼ıĞÎÍ¼°¸
#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int j=1;j<=n;j++)
        {
            for(int i=1;i<=2*(n-j+1);i++)
            {
                printf(" ");
            }
            for(int k=1;k<=j;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i = 0;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");
        for(int j=1;j<=n;j++)
        {
            for(int i=1;i<=2*j;i++)
            {
                printf(" ");
            }
            for(int k=1;k<=n-j+1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
