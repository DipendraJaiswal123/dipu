#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
struct node *emplist(struct node *start, int data);
struct node *beg(struct node *start, int data);
struct node *end(struct node *start, int data);
struct node *nposition(struct node *start, int data, int position);
struct node *delete(struct node *start, int data);
void display(struct node *start);
int main()
{
  struct node *start=NULL;
  int choice,data,position;

        printf("1. insert in an empty list\n");
        printf("2. insert at beginning\n");
        printf("3. insert at end\n");
        printf("4. insert at nth position\n");
        printf("5. delete\n");
        printf("6. display\n");
        printf("7. end programe\n");
    while(1)
     {
        printf("enter your choice");
        scanf("%d",&choice);
       switch(choice)
         {
            case 1:
                if(start!=NULL)
                 {
                  printf("list is not empty");
                  break;
                 }
                   printf("enter an element:");
                   scanf("%d",&data);
                   start=emplist(start,data);
                   break;

             case 2:
                  printf("enter a element:");
                  scanf("%d",&data);
                  start=beg(start,data);
                  break;

             case 3:
                  printf("enter a element:");
                  scanf("%d",&data);
                  start=end(start,data);
                  break;

             case 4:
                  printf("enter a element:");
                  scanf("%d",&data);
                  printf("enter a position:");
                  scanf("%d",&position);
                  start=nposition(start,data,position);
                  break;

             case 5:
                  printf("enter element to be delete:");
                  scanf("%d",&data);
                  start=delete(start,data);
                  break;

             case 6:
                   display(start);
                   break;

              case 7:
                    exit(0);

               default:
                       {
                         printf("wrong choice");

                       }

         }

    }
}
 struct node *emplist(struct node *start,int data)
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->info=data;
 temp->link=start;
 start=temp;
 return start;
}
struct node *beg(struct node *start,int data)
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->info=data;
 temp->link=start;
 start=temp;
 return start;
}
struct node *end(struct node *start,int data)
{
  struct node *temp,*p;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=data;
  p=start;
   while(p->link!=NULL)
      {
        p=p->link;
      }
    p->link=temp;
    temp->link=NULL;
    return start;
}
struct node *nposition(struct node *start,int data,int position)
{
 int i;
 struct node *temp,*p;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->info=data;
  if(position==1)
       {
         temp->link=start;
         start=temp;
         return start;
       }
       p=start;
     for(i=1;i<position-1&&p!=NULL;i++)
             {
               p=p->link;

              }

      if(p==NULL)
         {
            printf("element is less than %d\n",position);

         }
      else
        temp->link=p->link;
        p->link=temp;
        return start;

}
 struct node *delete(struct node *start,int data)
{
   struct node *temp,*p;
  if(start==NULL)
       {
          printf("list is empty");
          return start;
       }
 /*deletion of one node and first node*/
   if(start->info==data)
     {
       temp=start;
       start=start->link;
       free(temp);
       return start;
     }
/*deletion in betwwen or at the end*/
       p=start;
       while(p->link!=NULL)
       {
         if(p->link->info==data)
         {
           temp=p->link;
           p->link=temp->link;
           free(temp);
           return start;
         }

          p=p->link;
       }

       printf("element %d not found/n",data);
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
        printf("list: \n");
        while(p!=NULL)
        {
            printf(" %d",p->info);
            p=p->link;
        }
        printf("\n");
    }
}
