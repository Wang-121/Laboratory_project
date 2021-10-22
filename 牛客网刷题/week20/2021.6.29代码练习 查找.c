//Ğ¡ÀÖÀÖ²éÕÒÊı×Ö
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a[num+1];
    int i=0;
    int result=0;
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    int c;
    scanf("%d",&c);
    for(int j=0;j<num;++j)
        if(a[j]==c)
            result++;
    printf("%d",result);
    return 0;
}
