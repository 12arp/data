#include<stdio.h>
  struct node
{
    int top;
    int  last;
int arr[100];
};
void create(struct node*s)
{
    s->top = -1;
     s->last=-1;

}
push(struct node*s)
{int data;
        printf("enter");
        scanf("%d",&data);
    if (s->top==-1&&s->last==-1)
    {
        
        s->top++;
        s->last++;
        s->arr[s->last]=data;
    }
    else
    {
        s->last++;
        s->arr[s->last]=data;
    }
}
display(struct node*s)
{int i;
    for(i=s->last;i>=s->top;i--)
    {
        printf("%d\t",s->arr[i]);
    }
}
pop(struct node*s)
{
    int t;
    t=s->arr[s->top];
    s->top++;
    printf("the poped element is %d\n",t);
}
main()
{
    
    
    int n=1,k;
    struct node s;
    create(&s);
    while(n==1)
    {
         push(&s);
         printf("enter more");
         scanf(" %d",&n);
    }
    printf("do you");
         scanf("%d",&k);
    while (k==1)
    {
        pop(&s);
        printf("do you");
         scanf("%d",&k);
    }
    
   
    display(&s);
}