//��Сд��ĸת��
#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)==1)
    {
        if(a>='a'&&a<='z')
        printf("%c\n",a-32);
        else if (a>='A'&&a<='Z')
        printf("%c\n",a+32);
    }
    return 0;
}
