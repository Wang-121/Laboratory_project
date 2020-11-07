//½¡¿µÆÀ¹À
#include<stdio.h>
int main()
{
    float kg,m;
    float BMI;
    scanf("%f %f",&kg,&m);
    BMI=kg/(m*m);
    if(BMI>18.5&&BMI<23.9)
    {
        printf("Normal");
    }
    else
    {
        printf("Abnormal");
    }
    return 0;
}
