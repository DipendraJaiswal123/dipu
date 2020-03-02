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
struct node *delete(struct node *start,int data);
void display(struct node *start);
int main()
{
  struct node *start=NULL;
  int choice,data,item,Data;
  while(1)
  	{
 	    printf("1.insert in an empty list\n2.insert at beginnig\n3.insert at end\n4.insert at nth position\n5.Display\n6.delete the element\n7.end programe");
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

			case 6:
				printf("enter the elemnt to be delete:");
				scanf("%d",&Data);
				start=delete(start,Data);
				break;

			case 7:
			       exit(0);

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
struct node *delete(struct node *start,int Data)
{
   struct node *temp,*p;
   if(start==NULL)
   {
  	printf("list is empty");
	return start;
    }
    if(start->info==Data)
    {
       temp=start;
       start=NULL;
       free(temp);
       return start;
    }
    if(start->info==Data)
    {
      temp=start;
      p=start->next;
      start=start->next;
      p->next=start;
      start->prev=p;
      free(temp);
      return start;
    }
  p=start;
   while(p->next!=start)
   {

         if(p->next->info==Data)
          {
		temp=p->next;
		p->next=start;
		start->prev=p;
		free(temp);
          }
	p=p->next;
    }

    while(p->next!=start)
   {

          if(p->next->info=Data)
           {
		temp=p->next;
		p->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	    }
	p=p->next;
   }
 printf("element %d not found\n",Data);
  return start;
}

void display(struct node *start)
{
  struct node *p;
  if(start==NULL)
   {
     printf("list is empty");
   }
 else
 {
   p=start;
   while(p->next!=start)
   {
     printf(" %d",p->info);
     p=p->next;
   }
   printf(" %d",p->info);
}

