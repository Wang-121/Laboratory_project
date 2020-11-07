//学生基本信息输入输出
#include<stdio.h>
int main()
{
    long a;
    float b,c,d;
    scanf("%ld;%f,%f,%f\n",&a,&b,&c,&d);
    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.\n",a,b,c,d);
    return 0;
}
