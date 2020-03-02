#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top=-1;
void push();
void pop();
void display();
int main()
{
   int choice;
   printf("1.push or insert\n");
   printf("2.pop or delete\n");
   printf("3.display\n");
   printf("4.exit\n");
   while(1)
    {
      printf("enter your choice:");
      scanf("%d",&choice);
      switch(choice)
       {
         case 1:
               push();
               break;

         case 2:
               pop();
               break;

         case 3:
                display();
                break;

         case 4:
                exit(0);

         default:
            printf("wrong choice!");
        }
    }
}
void push()
{
  int data;
  if(top==MAX-1)
     {
       printf("Stack is Overflow or stack is full\n");
     }
   else
     {
        printf("enter element to be pushed:");
        scanf("%d",&data);
        top++;
        a[top]=data;
     }

}
void pop()
{
 if(top==-1)
    {

      printf("underflow or stack is empty\n");

    }
  else
    {
      printf("popped element:%d\n",a[top]);
      top--;
    }

}
void display()
{
  int i;
  if(top>=0)
    {
      printf("elements:");
      for(i=top;i>=0;i--)
      printf(" %d\t",a[i]);
    }
  else
    {
      printf("the stack is empty");

    }
    printf("\n");
}
