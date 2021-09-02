//统计数据正负个数
#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int p=0,n=0;
    for(i=0;i<10;i++)
        scanf("%d ",&a[i]);
     for(i=0;i<10;i++)
     {
         if(a[i]>0)
             p++;
         if(a[i]<0)
             n++;
     }
    printf("positive:%d\n",p);
    printf("negative:%d\n",n);
    return 0;
}
