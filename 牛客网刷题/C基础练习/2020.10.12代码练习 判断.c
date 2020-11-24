//Èý½ÇÐÎÅÐ¶Ï
#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a+b>c&&a+c>b)
        {
            if(a==b&&a==c)
                printf("Equilateral triangle!\n");
            else if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
                printf("Isosceles triangle!\n");
            else printf("Ordinary triangle!\n");
        }
        else printf("Not a triangle!\n");
    }
    return 0;
}
