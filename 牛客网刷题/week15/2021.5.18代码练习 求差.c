//最高分与最低分之差
#include<stdio.h>
int main()
{
    int n,m;
    int max=0,min=100;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m>max)
        {
            max=m;
        }
        if(m<min)
        {
            min=m;
        }
    }
    printf("%d\n",max-min);
    return 0;
}
