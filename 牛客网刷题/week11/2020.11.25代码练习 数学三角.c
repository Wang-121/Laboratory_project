//��ѧ������
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    return 0;
}
