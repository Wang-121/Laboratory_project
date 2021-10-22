//BC128小乐乐计算求和
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int a=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        a=a*i;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
