#include<stdio.h>
#define max 5
void enqueue();
void dequeue();
void display();
int q[max],front=-1,rear=-1;
int main()
{
  int choice;
  printf("***************************Operations of Queue**********************");
  printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.End programe\n");
  while(1)
  {
     printf("Enter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
             enqueue();
             break;

       case 2:
              dequeue();
              break;

       case 3:
             display();
             break;

       case 4:
               exit(0);

       default:
              printf("Wrong choice!");
     }
  }
}
void enqueue()
{
    int data;

   if((front==0&& rear==max-1)||(front==rear+1))
   printf("Queue is overflow or Queue is full\n");

     else
      {
         printf("Enter the element to be pushed:");
         scanf("%d",&data);

         if(rear==-1)
          {
            front=0,rear=0;  //front=rear=0;
            q[rear]=data;
          }
         else if(rear==max-1)
           {
             rear=0;
             q[rear]=data;
           }
          else
           {
            rear++;
            q[rear]=data;
           }
     }
}
void dequeue()
{
   int a;
   if(front==-1)
   printf("Queue is Underflow or Queue is empty\n");
   else
    {
      if(front==rear)
       {
         a=q[front];
         front=-1,rear=-1;
       }
      else if(front==max-1)
        {
          a=q[front];
          front=0;
         }
      else
       {
         a=q[front];
         front++;
       }

       printf("Deleted element is %d\n",a);
     }
}
void display()
{
  int i,j;
  if(front==-1&&rear==-1)
  printf("Queue is Underflow.\n");
  if(front>rear)
  {
   for(i=front;i<max;i++)
   printf("\t%d",q[i]);
   for(j=0;j<=rear;j++)
   printf("\t%d",q[j]);
  }
  else
  {
    for(i=front;i<=rear;i++)
    printf("\t%d",q[i]);
  }
  printf("\n");
}
