//–°¿÷¿÷”Î–Ú¡–
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int k=0;
    int a[100001]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        a[k]=k;
    }
    for(i=1;i<100001;i++)
    {
        if(a[i]!=0)
            printf("%d ",a[i]);
    }
    return 0;
}
