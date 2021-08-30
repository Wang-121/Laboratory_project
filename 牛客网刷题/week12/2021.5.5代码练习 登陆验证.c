#include <stdio.h>
int main()
{
    char name[20]="0";
    char password[20]="0";
    while(scanf("%s %s",name,password)!=EOF)
    {
        if(strcmp(name,"admin")==0&&strcmp(password,"admin")==0)
            printf("Login Success!");
        else
            printf("Login Fail!");
    }
    return 0;
}
