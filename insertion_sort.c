#include<stdio.h>
int main()
{
  int i,n,j,temp,A[100];
   printf("Enter No.of element for the sorting:");
   scanf("%d",&n);
   printf("\nEnter the elements for sorting:\n");
    for(i=0;i<=n-1;i++)
      {

         scanf("%d\n",&A[i]);

      }
 printf("\nArry before sorting: \n");
   for(i=0;i<=n-1;i++)
      {

         printf("%d\t",A[i]);

      }
  for(i=1;i<=n-1;i++)
    {
      temp=A[i];
      j=i-1;
      while(j>=0&&A[j]>temp)
         {
           A[j+1]=A[j];
           j--;

         }
        A[j+1]=temp;

    }
  printf("\nArry after sorting: \n");
     for(i=0;i<=n-1;i++)
   {
     printf("%d\t",A[i]);
   }


}
