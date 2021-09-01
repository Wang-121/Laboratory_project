//ÃÜÂëÑéÖ¤
#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    scanf("%s%s",a,b);
    if (0==strcmp(a,b))
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    return 0;
}
