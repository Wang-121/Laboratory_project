//Ğ¡ÀÖÀÖ¼ÆËãº¯Êı
#include<stdio.h>
int max3(int a,int b,int c)
{
    int max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    return max;
}

int main()
{
    int a,b,c;
    double m;
    scanf("%d %d %d",&a,&b,&c);
    m=max3(a+b,b,c)*1.0/(max3(a,b+c,c)+max3(a,b,b+c));
    printf("%.2lf",m);
    return 0;
}
