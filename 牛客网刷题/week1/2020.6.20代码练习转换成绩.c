//×ª»»³É¼¨//
#include<stdio.h>
int main()
{
    int s;
    char c;
    scanf("%d",&s);
    if(s>=90&&s<=100)
        c='A';
    else if(s>=80&&s<=89)
        c='B';
    else if(s>=70&&s<=79)
        c='C';
    else if(s>=60&&s<=69)
        c='D';
    else if(s>=0&&s<=59)
        c='E';
    else
        c='F';
    printf("%c",c);
    return 0;
}
