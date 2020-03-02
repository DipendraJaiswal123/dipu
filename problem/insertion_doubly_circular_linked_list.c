
#include<stdio.h>
struct node
{
   int info;
   struct node *prev;
   struct node *next;
};
struct node *emplist(struct node *start, int data);
struct node *beg(struct node *start,int data);
struct node *end(struct node *start, int data);
struct node *after(struct node *start, int data,int item);
void display(struct node *start);
int main()
{
  struct node *start=NULL;
  int choice,data,item;
  while(1)
  	{
 	    printf("1.insert in an empty list\n2.insert at beginnig\n3.insert at end\n4.insert at nth position\n5.Display\n6.end programe\n");
            printf("Enter your choice:");
            scanf("%d",&choice);

          	switch(choice)
		{
			case 1:
      				if(start!=NULL)
				{
				   printf("list is not empty");
				}
				printf("enter the element:");
				scanf("%d",&data);
				start=emplist(start,data);
				break;

			case 2:
				printf("enter the element:");
				scanf("%d",&data);
				start=beg(start,data);
				break;

			case 3:
 				printf("enter the element:");
				scanf("%d",&data);
				start=end(start,data);
				break;

			case 4:
 				printf("enter the element:");
				scanf("%d",&data);
				printf("enter which data after insert element:");
				scanf("%d",&item);
				start=after(start,data,item);
				break;

			case 5:
				display(start);
				break;

			default:
				printf("wrong choice!");

		}
	}
}
struct node *emplist(struct node *start,int data)
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->info=data;
  temp->next=temp->prev=temp;
  start=temp;
  return start;
}
struct node *beg(struct node *start,int data)
{
 struct node *temp,*last;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->info=data;
 last=start->prev;
 temp->next=start;
 temp->prev=last;
 last->next=start->prev=temp;
 start=temp;
 return start;
}
struct node *end(struct node *start, int data)
{
 struct node *temp,*last;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->info=data;
 last=start->prev;
 temp->next=start;
 start->prev=temp;
 temp->prev=last;
 last->next=temp;
 return start;
}
struct node *after(struct node *start,int data,int item)
{
  int i;
  struct node *temp,*p,*q;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->info=data;
  p=start;
  while(p->info!=item)//for(i=1;i<item-1&&p!=start;i++)
   {
     p=p->next;
   }
  q=p->next;
  p->next=temp;
  temp->prev=p;
  temp->next=q;
  q->prev=temp;
  return start;
}
void display(struct node *start)
{
  struct node *p,*last;
  p=start;
  printf("\nTraversing in forward direction\n");
  while(p->next!=start)
  {
    printf(" %d",p->info);
    p=p->next;
  }
  printf(" %d",p->info);

  printf("\nTraversing in reverse direction\n");
  last=start->prev;
  p=last;
  while(p->prev!=last)
  {
    printf(" %d",p->info);
    p=p->prev;
  }
  printf(" %d",p->info);
}


