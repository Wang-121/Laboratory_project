//ÅÐ¶ÏÁ½¸öÊý´óÐ¡//
#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
    if(x>y)
    {
        printf("%d>%d\n",x,y);
    }
    else if(x<y)
    {
        printf("%d<%d\n",x,y);
    }
    else
    {
        printf("%d=%d\n",x,y);
    }
    }
    return 0;
}
