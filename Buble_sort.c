#include<stdio.h>
void bubble_sort(int A[],int N);
int main()
{
 int A[100],i,n;
 printf("Enter the no.of element:");
 scanf("%d",&n);
 printf("\nEnter the element of array for sorting: ");
 for(i=0;i<=n-1;i++)
 scanf("%d",&A[i]);
 printf("\nBefore sorting arrays:");
 for(i=0;i<=n-1;i++)
 printf(" %d",A[i]);
 bubble_sort(A,n);
 printf("\nAfter sorting arrays:");
 for(i=0;i<=n-1;i++)
 printf(" %d",A[i]);
}
void bubble_sort(int A[],int N)
 {
 int round,i,temp;
 for(round=1;round<=N-1;round++)
  for(i=0;i<=N-1-round;i++)
   if(A[i]>A[i+1])
       {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;

      }
 }
