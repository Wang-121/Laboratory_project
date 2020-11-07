//按照格式输入并交换输出
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("a=%d,b=%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    return 0;
}
