//翻转直角三角形图案
#include<stdio.h>
int main()
{
    int i,j,n;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++)
                printf("* ");
             printf("\n");
        }
    }
    return 0;
}
