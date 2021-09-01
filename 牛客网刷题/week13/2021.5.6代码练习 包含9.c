#include<stdio.h>
int main()
{
    int i,l=0;
    int t;
    for(i=1;i<=2019;i++){
        t=i;
        while(t>0){
            if(t%10==9){
                l++;
                break;
            }
            t/=10;
        }
    }
    printf("%d",l);
        return 0;
}
