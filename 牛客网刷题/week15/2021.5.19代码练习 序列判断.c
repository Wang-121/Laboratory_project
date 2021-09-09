//”––Ú–Ú¡–≈–∂œ
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int i=0;
    int num[50]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    if(num[0]>num[1])
    for(i=0;i<n-1;i++)
    {
        if(num[i]<num[i+1])
            break;
    }
    else
        for(i=0;i<n-1;i++)
        {
            if(num[i]>num[i+1])
                break;
        }
    if(i==n-1)
        printf("sorted\n");
    else
        printf("unsorted\n");
    return 0;
}
