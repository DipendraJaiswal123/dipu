#include<stdio.h>
Linear_Search(int [],int,int);
void main()
{
   int A[100],n,i,key;
  printf("Enter the no.of elements in the list: ");
  scanf("%d",&n);
  printf("\nEnter the list of elements: \n");
   for(i=0;i<n;i++)
    {
      scanf("%d",&A[i]);
    }
  printf("\nYou Entered:");
   for(i=0;i<n;i++)
    {
       printf(" %d",A[i]);
    }
  printf("\n\nEnter the element to be searched:");
  scanf("%d",&key);
  Linear_Search(A,n,key);
}
Linear_Search(int A[],int N,int item)
{
  int flag=1,i;
  for(i=0;i<=N-1;i++)
   {
      if(A[i]==item)
       {
         flag=0;
          printf("\nSearched Successfully,item found at the position %d",i+1);
        }
     }
     if(flag==1)
     {
      printf("Searched Unsuccessful \nitem not found.");
      }
}
