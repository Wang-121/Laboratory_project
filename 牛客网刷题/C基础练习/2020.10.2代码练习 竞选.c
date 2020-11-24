//¾ºÑ¡Éç³¤
#include<stdio.h>
int main()
{
    char x;
    int a=0,b=0;
    while(scanf("%c",&x)==1)
    {
        if(x=='0')
        break;
        if(x=='A')
            a++;
        if(x=='B')
            b++;
    }
    if(a==b)
        printf("E");
    else if(a>b)
        printf("A");
    else if(a<b)
        printf("B");
}
