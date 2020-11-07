//ÅÐ¶Ï×ÖÄ¸
#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(a<='z'&&a>='A')
        {
            printf("YES\n");
            getchar( );
        }
        else
        {
            printf("NO\n");
            getchar( );
        }
    }
    return 0;
}
