#include<stdio.h>
//define Maxsize 10
struct Arraystack
{
  int top;
  int capacity;
  int *array;
};
struct Arraystack *createstack(int cap)
{
  struct Arraystack *s=malloc(sizeof(struct Arraystack));
  if(!s)
   return NULL;
   s->capacity=cap; //MAXSIZE;
   s->top=-1;
   s->array=malloc(sizeof(int)*s->capacity);
   if(!s->array)
   return NULL;
   return s;
}
int IsEmptystack(struct Arraystack *s)
{
  return(s->top==-1);
}
int IsFullstack(struct Arraystack *s)
{
   return(s->top==s->capacity-1);

}
void push(struct Arraystack *s,int data)
{
  if(IsFullstack(s))
  printf("stack overflow or stack is full");
  else
  s->array[++s->top]==data;
}
int pop(struct Arraystack *s)
{
  if(IsEmptystack(s))
  {
    printf("stack is empty or stack is underflow");
    return -1;
  }
  else
  return(s->array[s->top--]);
}
int main()
{
  int choice,data;
  struct Arraystack *s;
  s=createstack(4);
  while(1)
  {
    printf("\n1.push");
    printf("\n2.pop");
    printf("\n3.exit");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
      case1:
            printf("\nenter a number");
            scanf("%d",&data);
            push(s,data);
            break;

       case2:
            data=pop(s);
             printf("\n pop value is %d",data);
             break;

        case3:
          exit(0);

    }
  }

}
