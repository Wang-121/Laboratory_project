//С����������˱���ҳ�
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    while(n--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c<3 * 60)
            ++count;
    }
    printf("%d\n",count);
}
