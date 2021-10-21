//Ğ¡ÀÖÀÖ×ßÌ¨½×
#include<stdio.h>
int main()
{
    int a[31]={0,1,2,3},n,i;
    scanf("%d",&n);
    for(i=4;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d",a[n]);
    return 0;
}
