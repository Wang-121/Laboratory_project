//ºâÁ¿ÈËÌåÅÖÊÝ³Ì¶È
#include<stdio.h>
int main()
{
    int kg,cm;
    float BMI;
    while(scanf("%d %d",&kg,&cm)!=EOF)
    {
        BMI=10000.0*kg/(cm*cm);
        if(BMI<18.5)
            printf("Underweight\n");
        else if(BMI<=23.9)
            printf("Normal\n");
        else if(BMI<=27.9)
            printf("Overweight\n");
        else
            printf("Obese\n");
    }
    return 0;
}
