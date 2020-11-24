//计算三角形的周长和面积
#include<stdio.h>
int main()
{
    float a,b,c;
    float cir, area;
    scanf("%f %f %f",&a,&b,&c);
    cir=a+b+c;
    area=sqrt((a+b+c)* (a+b-c) * (a+c-b) * (b+c-a))/4;
    printf("circumference=%.2f area=%.2f",cir,area);
    return 0;
}
