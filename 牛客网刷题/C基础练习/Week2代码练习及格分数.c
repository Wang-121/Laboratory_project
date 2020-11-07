//及格分数
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
    if(n>=60)
        printf("Pass\n");
    else
        printf("Fail\n");
    }
    return 0;
}
