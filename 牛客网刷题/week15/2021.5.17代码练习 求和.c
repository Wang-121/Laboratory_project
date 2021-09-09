//N个数之和
#include<stdio.h>
int main()
{
    int N,num;
    int sum=0;
    scanf("%d",&N);
    int i=0;
    for(i=0;i<N;i++)
    {
        scanf("%d ",&num);
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}
