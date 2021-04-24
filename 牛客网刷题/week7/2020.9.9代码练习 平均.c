//计算平均成绩
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float x;
    x=(a+b+c+d+e)/5.0;
    printf("%.1f",x);
    return 0;
}
