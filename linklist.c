#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct NODE
{
int data;
struct NODE *link;
}node;

node* getnode()                       
{
 node *n1;
 n1=(node*)malloc(sizeof(node));
 n1->link=NULL;
 return n1;
}
node* create()                       
{
 node *NEW1,*temp,*NEW,*start;
 int element;
 char ans='y';
 printf("\n enter an element\n");
 scanf("%d",&element);
 NEW=getnode();            
 start=NEW;
 temp=start;
 NEW->data=element;
 NEW->link=NULL;
 printf("\n do u want 2 enter mor elements:y or n");
 ans=getche();
 while(ans=='y')
 {
 printf("\n enter d element\n");
 scanf("%d",&element);
 NEW1=getnode();
 if(NEW1==NULL)
 {
 printf("\n overflow");
 }
 else
 {
  temp->link=NEW1;
  NEW1->data=element;
  temp=NEW1;
  NEW1->link=NULL;
 }
 printf("\n do u want 2 enter mor elements:y or n");
 ans=getche();
 }
 getch();
 return start;
 }
void display(node *start)   
{
 node *temp;
 temp=start;
 if(temp==NULL)
  {
   printf("\n the list is empty \n");
   getch();
  }
 while(temp!=NULL)
 {
  printf("%d->",temp->data);
  temp=temp->link;
 }
 printf("null");
 //getch();
}
node* insertf(node* start)
{
 node *New;
 int element;
 printf("\n enter d element\n");
 scanf("%d",&element);
 New=(node*)malloc(sizeof(node));
 if(New==NULL)
 {
 printf("\n overflow");
 exit(0);
 }
 New->data=element;
 New->link=start;
 start=New;
 return(start);
}
node* inserte(node* start)
{int element;
   scanf("%d",&element);
node *temp,*NEW;
              temp = start;
        NEW = malloc(sizeof (node));



        while(temp->link != NULL) {
            temp = temp->link;
        }
        temp->data=element;
        temp->link  = NEW;
        NEW->link = NULL;

        return start;
}
node* insertm(node* start)
{
 node *New,*temp;
 int element,key;
 printf("\n enter d value aftre which u wanna insert\n");
 display(start);
 scanf("%d",&key);
 printf("\n enter d element\n");
 scanf("%d",&element);
 temp=start;
 New=(node*)malloc(sizeof(node));
 if(New==NULL)
 {
 printf("\n overflow");
 exit(0);
 }
 while(temp!=NULL&&temp->data!=key)
 {
 temp=temp->link;
 }
 if(temp==NULL)
 printf("\n key value nt present in ll");
 else
 New->data=element;
 New->link=temp->link;
 temp->link=New;
 return(start);
}
node* delete1st(node* start)
{
 node *temp;
 if(start==NULL)
 {
 printf("\n underflow");
 exit(0);
 }
 temp=start;
 start=temp->link;
 free(temp);
 return(start);
}
node* deletelast(node*start)
{
 node *temp,*ptr;
 if(start==NULL)
 {
 printf("\n underflow");
 exit(0);
 }
 ptr=start;
 while(ptr->link!=NULL)
 {
 temp=ptr;
 ptr=ptr->link;
 }
 temp->link=NULL;
 free(ptr);
 return(start);
}
node* deletem(node*start)
{
 node *temp,*ptr;
 int key;
 if(start==NULL)
 {
 printf("\n underflow");
 exit(0);
 }
 ptr=start;
 printf("\n enter d key value u want 2 delete");
 display(start);
 scanf("%d",&key);
 temp=ptr;
 while(ptr->data!=key)
 {
 temp=ptr;
 ptr=ptr->link;
 }
 if(start->data==key)
 start=ptr->link;
 else
 temp->link=ptr->link;
 free(ptr);
 return(start);
}


void main()
{
int ch;
char ans;
node *start;
start=NULL;
//clrscr();
do
{
printf("\nprogram 2 perform various operation on linked list...");
printf("\n1\tcreate\n2\tdisplay\n3\tinsert at front\n4\tinsert at end\n5\tinsert at given key value");
printf("\n6\tdelete frm front\n7\tdelete frm end\n8\tdelete d given key value");
printf(" enter ur choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:start=create();
       display(start);
       break;
case 2:display(start);
       break;
case 3:start=insertf(start);
       display(start);
       break;
case 4:start=inserte(start);
       display(start);
       break;
case 5:start=insertm(start);
       display(start);
       break;
case 6:start=delete1st(start);
       display(start);
       break;
case 7:start=deletelast(start);
       display(start);
       break;
case 8:start=deletem(start);
       display(start);
       break;
default:printf("wrong choice");
	break;
}
printf("\n do u wanna perform mor funct: y or n\n");
ans=getche();
}while(ans=='y');
}
