#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *createlist(struct node *last);
struct node *emplist(struct node *last, int value);
struct node *beg(struct node *last, int value);
struct node *end(struct node *last, int value);
struct node *addtoafter(struct node *last, int data, int item);
struct node *delete(struct node *last,int value);
void Display(struct node *last);
int main()
{
  int choice,value,item;
  struct node *last=NULL;
   while(1)
       {
           printf("\n1. create a list");
           printf("\n2. insert in an empty list");
           printf("\n3. insert at beginning");
           printf("\n4. insert at end");
           printf("\n5. insert at after in list");
           printf("\n6. Delete");
           printf("\n7. Display");
           printf("\n8. end programe");
           printf("\n\n enter your choice");
           scanf("%d",&choice);

             switch(choice)
               {

                  case 1:
                        last=createlist(last);
                        break;

                  case 2:
                        printf("enter a number for the list");
                        scanf("%d",&value);
                        last=emplist(last,value);
                        break;

                  case 3:
                        printf("enter a number for the list");
                        scanf("%d",&value);
                        last=beg(last,value);
                        break;

                  case 4:
                        printf("enter a number for the list");
                        scanf("%d",&value);
                        last=end(last,value);
                        break;

                   case 5:
                         printf("enter a number for the list");
                         scanf("%d",&value);
                         printf("enter item value after new value to be insert");
                         scanf("%d",&item);
                         last=addtoafter(last,value,item);
                         break;

                   case 6:
                         printf("enter a number to be delete");
                         scanf("%d",&value);
                         last=delete(last,value);
                         break;

                   case 7:
                         Display(last);
                         break;

                   case 8:
                         exit(0);

                   default:
                           printf("wrong choice!");
             }

        }

}

struct node *createlist(struct node *last)
{
  int i,n,value;
    printf("how many values you want to insert");
    scanf("%d",&n);
    printf("enter first data for the list");
    scanf("%d",&value);
    last=emplist(last,value);
  for(i=2;i<=n;i++)
    {
      printf("enter data for the list");
      scanf("%d",&value);
      last=end(last,value);
    }
  return last;
}
struct node *emplist(struct node *last, int value)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->data=value;
  temp=last;
  last->next=last;
  return last;
}
struct node *beg(struct node *last, int value)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->data=value;
  temp->next=last->next;
  last->next=temp;
}
struct node *end(struct node *last, int value)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->data=value;
  temp->next=last->next;
  last->next=temp;
  last=temp;
  return last;
}
struct node *addtoafter(struct node *last, int value, int item)
{
  struct node *temp,*p;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->data=value;
  p=last->next;
    do
      {
        if(p->data==item)
          {
            temp->next=p->next;
            p->next=temp;
             if(p==last)
              last=temp;
              return last;
           }
        p=p->next;
       }while(p!=last->next);

  printf("%d is not in the list",item);
  return last;
}
struct node *delete(struct node *last, int value)
{
 struct node *temp,*p;
  if(last==last->next&&last->data==value)
   {
     temp=last;
     last=NULL;
     free(temp);
     return last;
    }
  if(last->next->data==value)
   {
     temp=last->next;
     last->next=temp->next;
     free(temp);
     return last;
   }

  p=last->next;
  while(p->next!=last)
   {
      if(p->next->data==value)
       {
         temp=p->next;
         p->next=temp->next;
         free(temp);
         return last;
        }
    p=p->next;
  }
 if(last->data==value)
  {
    temp=last;
    p->next=last->next;
    last=p;
    free(temp);
    return last;
  }
}
void Display(struct node *last)
{
  struct node *p;
	if(last==NULL)
		printf("list is empty");
	else
	{
		p=p->next;

		do
		{
			printf("%d",p->data);
			p=p->next;
		}while(p!=last->next);
	}
}
