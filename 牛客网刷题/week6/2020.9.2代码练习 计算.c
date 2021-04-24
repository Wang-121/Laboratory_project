//计算体重指数
#include<stdio.h>
int main()
{
    float a,b,BMI;
    scanf("%f %f",&a,&b);
    b=b/100;
    BMI=a/(b*b);
    printf("%.2f",BMI);
    return 0;
}
