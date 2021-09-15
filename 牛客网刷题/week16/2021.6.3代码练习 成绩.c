//班级成绩输入输出
#include<stdio.h>
int main()
{
    float a[5][6];
    int i,j;
    for(i=0;i<5;i++)
    {
        float sum=0;
        for(j=0;j<5;j++)
        {
            scanf("%f",&a[i][j]);
            sum+=a[i][j];
        }
        a[i][5]=sum;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%.1f ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
