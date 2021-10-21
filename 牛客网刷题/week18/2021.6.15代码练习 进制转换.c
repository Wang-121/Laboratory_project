//小乐乐与进制转换
#include<stdio.h>
int main()
{
    int n;
    int a[100]={0};
    int count=0;
    int s=0;
    scanf("%d",&n);
    if(n==0)
    {
        count = 1;
        a[count]=0;
    }
    while(n)
    {
        count++;
        a[count]=n%6;
        n/=6;
    }
    for(int i=count;i>0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
