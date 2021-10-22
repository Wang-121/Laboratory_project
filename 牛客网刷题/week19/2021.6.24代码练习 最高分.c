//小乐乐算最高分
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int max=0,score;
    while(n--)
    {
        scanf("%d",&score);
        if(score>max)
            max=score;
    }
    printf("%d",max);
    return 0;
}
