//正方形图案
#include <stdio.h>
int main()
{
    int a,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}
