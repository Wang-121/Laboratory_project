//¡‚–ŒÕº∞∏
#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n-i;j++)
                printf(" ");
            for(int j=0;j<i+1;j++)
                printf("* ");
            printf("\n");
        }
        for(int i=n+1;i<2*n+1;i++)
        {
            for(int j=0;j<i-n;j++)
                printf(" ");
            for(int j=0;j<2*n-i+1;j++)
                printf("* ");
            printf("\n");
        }
    }
}
