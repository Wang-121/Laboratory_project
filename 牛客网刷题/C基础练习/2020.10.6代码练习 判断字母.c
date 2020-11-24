//ÅÐ¶ÏÊÇ²»ÊÇ×ÖÄ¸
#include <stdio.h>
int main(){
    char c;
    while(scanf("%c",&c)!=EOF){
        if(c>='A'&&c<='z')
            printf("%c is an alphabet.\n",c);
        else
            printf("%c is not an alphabet.\n",c);
        getchar();
    }
    return 0;
}
