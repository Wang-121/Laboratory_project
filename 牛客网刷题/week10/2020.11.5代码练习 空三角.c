//带空格直角三角形图案
#include<stdio.h>
int main()
{
    int i,j,n,k;
    while(scanf("%d",&n)!=EOF){
        for(i = 1;i<=n;i++){
            for(k = 0;k<n-i;k++){
                printf("  ");
            }
            for(j = 0;j<i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
