#include<stdio.h>
#define max 5
int Q[max],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit");
    while(1)
    {
        printf("\nEnter your choice:");
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
                      printf("\nWrong choice!");
        }
    }
}
void enqueue()
{
    int data;
    if(rear==max-1)
    {
        printf("Queue is overflow");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
           printf("Enter the Element:");
           scanf("%d",&data);
           rear++;
           Q[rear]=data;
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("\nQueue is underflow");
    }
    else
    {
        printf("\nDequeue:%d",Q[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("Elements:");
        for(i=0;i<=rear;i++)
        {
            printf("\n%d",Q[i]);
        }
    }
}
