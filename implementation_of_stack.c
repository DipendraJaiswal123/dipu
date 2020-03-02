#include<stdio.h>
struct node
{
 int info;
 struct node *next;

};
void push(struct node **stack, int data)
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->info=data;
 temp->next=*stack;
 *stack=temp;
}
int peek(struct node **stack)
{
 if(*stack==NULL)
     {
       printf("stack is empty");
       return;
     }
   else

     {

       return((*stack)->info);
     }
}
int pop(struct node **stack)
{
  int item;
  struct node *p;
   if(*stack==NULL)
   {
     printf("stack is underflow");
     return;
   }
   else
   {
     item=(*stack)->info;
     p=*stack;
     *stack=p->next;
     free(p);
     return(item);
    }
}
void remove_stack(struct node **stack)
{
   while(*stack!=NULL)
    pop(stack);

}
int main()
{
  struct node *stack;
  push(&stack,10);
  push(&stack,20);
  push(&stack,30);
  push(&stack,40);
printf(" %d ",pop(&stack));
printf(" %d ",peek(&stack));
}
