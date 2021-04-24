//公务员面试
#include<stdio.h>
int main()
{
    int a[7];
    int max=0,min=100;
    float ave,sum=0;
    for(int i=0;i<7;i++)
    {
        scanf("%d ",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum+=a[i];
    }
    sum=sum-max-min;
    ave=sum/5;
    printf("%.2f",ave);
    return 0;
}
