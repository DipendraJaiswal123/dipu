#include<stdio.h>
int main()
{
  int i,j,min,temp,A[5];
  printf("enter a element:\n ");
   for(i=0;i<=4;i++)
    {
      scanf("%d",&A[i]);
    }
 printf("Array before selection sort:");
  for(i=0;i<=4;i++)
  {
   printf("%d\t",A[i]);
   }

 for(i=0;i<=3;i++)
  {
    min=i;
     for(j=i+1;j<=4;j++)
      {
       if(A[min]>A[j])
         {
           min=j;
         }
      }
   if(i!=min)
    {
      temp=A[i];
      A[i]=A[min];
      A[min]=temp;
    }
 }
  printf("\nArray after selection sorting:");
   for(i=0;i<=4;i++)
    {
     printf(" %d\t",A[i]);

     }

  }









