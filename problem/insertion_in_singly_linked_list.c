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
struct node *nposition(struct node *start, int data, int nposition);
void display(struct node *start);
 int main()
 {
   struct node *start=NULL;
   int choice,data,position;

             printf("1.insert in an empty list\n");
             printf("2.insert at beginning\n");
             printf("3.insert at end\n");
             printf("4.insert at nth position\n");
             printf("5.Display\n");
             printf("6.End programe\n");

          while(1)
          {
             printf(" Enter your choice:");
             scanf("%d",&choice);
         switch(choice)
                {
                  case 1:
                        if(start!=NULL)
                          {
                             printf("List is not empty\n");
                             break;

                          }
                             printf("Enter a Element:");
                             scanf("%d",&data);
                             start=emplist(start,data);
                             break;


                  case 2:
                         printf("Enetr a Element:");
                         scanf("%d",&data);
                         start=beg(start,data);
                         break;


                 case 3:
                        printf("Enter a Element:");
                        scanf("%d",&data);
                        start=end(start,data);
                        break;

                 case 4:
                        printf("Enter a Element:");
                        scanf("%d",&data);
                        printf("Enter a position:");
                        scanf("%d",&position);
                        start=nposition(start, data, position);
                        break;

                 case 5:
                         display(start);
                        break;

                 case 6:
                       exit(0);

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
  temp->link=start;
  start=temp;
  return start;

}
struct node *beg(struct node *start, int data)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=data;
  temp->link=start;
  start=temp;
  return start;
}
struct node *end(struct node *start, int data)
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
struct node *nposition(struct node *start, int data, int position)
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
            for(i=1; i<position-1 && p!=NULL; i++)
             {
               p=p->link;
             }
            if(p==NULL)
             {

               printf("there are less than %d element\n",position);

             }
           else
            {
              temp->link=p->link;
              p->link=temp;
            }

         return start;
}
 void display(struct node *start)
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
               p=p->link;

             }
           printf("\n");
           }

}
