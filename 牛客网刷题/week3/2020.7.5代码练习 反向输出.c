//反向输出一个四位数
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d%d%d%d",n%10, n/10%10, n/100%10, n/1000);
    return 0;
}
