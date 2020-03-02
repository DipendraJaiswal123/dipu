#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *prev;
  struct node *next;
};
struct node *emplist(struct node *start, int data);
struct node *beg(struct node *start, int data);
struct node *end(struct node *start, int data);
struct node *nposition(struct node *start, int data);
void Display(struct node *start);
int main()
{
  int choice,data,position;
  struct node *start=NULL;
   while(1)
       {
         printf("1. insert in an empty list.\n");
         printf("2. insert in at beginning.\n");
         printf("3. insert at End.\n");
         printf("4. insert at nth position.\n");
         printf("5. Display.\n");
         printf("6. end programe.\n");
         printf(" enter your choice");
         scanf("%d",&choice);
           switch(choice)
              {
                case1:
                      printf("enter element:");
                      scanf("%d",&data);
                      start=emplist(start,data);
                      break;

                 case2:
                       printf("enter element:");
                       scanf("%d",&data);
                       start=beg(start,data);
                       break;

                  case3:
                        printf("enter element:");
                        scanf("%d",&data);
                        start=end(start,data);
                        break;

                  case4:
                        printf("enter element:");
                        scanf("%d",&data);
                        printf("enter a position");
                        scanf("%d",&position);
                        start=nposition(start,data);
                        break;

                  case5:
                        Display(start);
                        break;

                   case6:
                         Exit(0);

                   default:
                         printf("wrong choice!");

               }


       }
 }

struct node *emplist(struct node *start, int data)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=data;
  temp->prev=NULL;
  temp->next=NULL;
  start=temp;
  return start;
}
struct node *beg(struct node *start, int data)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=data;
  temp->prev=NULL;
  temp->next=start;
  start->prev=temp;
  start=temp;
  return start;
}
struct node *end(struct node *start, int data)
{
  struct node *p,*temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=data;
   p=start;
 while(p->next!=NULL)
      {
         p=p->next;
      }
    p->next=temp;
    temp->prev=p;
    temp->next=NULL;
    return start;
}
struct node *position(struct node *start, int data)
{
  int i;
 struct node *temp,*p;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->info=data;
  if(position==1)
    {
      temp->prev=NULL;
      temp->next=start;
      start->prev=temp;
      start=temp;
      return start;
    }
   p=start;
   for(i=1;i<position-1&&p!=NULL;i++)
      {
        p=p->next;

                                                         }
  if(p==NULL)
      {

        printf("there are less than %d element\n",position);

      }
 else
    {
     temp->prev=p;
     temp->next=p->next;
     if(p->next!=NULL)
     p->next->prev=temp;
     p->next=temp;
    }
}
void Display(struct node *start)
{
  struct node *p;
  if(start==NULL)
    {
      printf("list is empty\n");

    }
  else
 {
   p=start;
   printf("list: \n");
   while(p!=NULL)
     {
       printf("%d\t",p->info);
       p=p->next;
     }
  }
    printf("\n");
}








