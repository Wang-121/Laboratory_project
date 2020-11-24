//¼ÆËãÒ»Ôª¶þ´Î·½³Ì
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f;
    while(scanf("%f %f %f",&a,&b,&c)!=EOF)
    {
        if(a==0)
        {
            printf("Not quadratic equation\n");
        }
        if(a!=0)
        {
            d=b*b-4*a*c;
            e=-b/(2*a);
            f=sqrt(-d)/(2*a);
            if(d==0)
            {
                printf("x1=x2=%.2f\n",-b/(2*a));
            }
            else if(d>0)
            {
                printf("x1=%.2f;x2=%.2f\n",-(b+sqrt(d))/(2*a),-(b-sqrt(d))/(2*a));
            }
            else
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",e,f,e,f);
        }
    }
    return 0;
}
