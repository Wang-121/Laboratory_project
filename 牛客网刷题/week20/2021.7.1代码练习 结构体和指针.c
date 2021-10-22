//KiKi学结构体和指针
#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct node)
struct node
{
    int data;
    struct node *next;
};
int n,i,m;
struct node *creat()
{
    struct node *head;
    struct node *p1,*p2;
    i=0;
    p1=p2=(struct node *)malloc(LEN);
    scanf("%d", &p1->data);
    head=NULL;
    while(n>1)
    {
        i=i+1;
        if (i==1)head=p1;
        else p2 ->next=p1;
        p2=p1;
        p1=(struct node *)malloc(LEN);
        scanf("%d",&p1->data);
        n=n-1;
    }
    p2->next=p1;
    p1->next=NULL;
    return(head);
}
int  main()
{
    scanf("%d",&n);
    struct node *head;
    head =creat();
    int m,count=0;
    scanf("%d",&m);
    struct node *p;
    p=head;

    for (int j=0;j<=i;j++)
    {
		if  ((p != NULL)&&((p->data) !=m))
        {
            count +=1;
			p = p->next;
	     }
        else
        {
            p = p->next;
        }
    }
    printf("%d\n",count);
    p=head;
    for (int j=0;j<=i;j++)
    {
		if  ((p != NULL)&&((p->data) !=m))
        {
			printf("%d ", p->data);
            p = p->next;
	     }
        else
        {
            p = p->next;
        }
    }
}
