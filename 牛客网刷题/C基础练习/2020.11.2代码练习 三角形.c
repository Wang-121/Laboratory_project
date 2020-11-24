//Ö±½ÇÈý½ÇÐÎÍ¼°¸
#include<stdio.h>
int main()
{
    int i,j,k;
    while(scanf("%d",&i)!=EOF)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=j;k++)
             printf("* ");
            printf("\n");
        }

    }

    return 0;
}
