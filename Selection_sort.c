#include<stdio.h>
#include<stdlib.h>
int Selection_sort(int [],int,int);
int main()
{
  int A[100],k,n,LOC,temp;
  printf("Enter No. of element for sorting:");
  scanf("%d",&n);
  printf("\nEnter the elements for sorting:\n");
  for(k=0;k<=n-1;k++)
  scanf("%d",&A[k]);
  printf("\nBefore sorting arrays:");
  for(k=0;k<=n-1;k++)
  printf(" %d",A[k]);
   for(k=0;k<=n-2;k++)
    {
      LOC=Selection_Sort(A,k,n);
      temp=A[k];
      A[k]=A[LOC];
      A[LOC]=temp;
    }
    printf("\nAfter sorting arraya:");
   for(k=0;k<=n-1;k++)
   printf(" %d",A[k]);

   }
int Selection_Sort(int A[], int k, int N)
{
  int LOC,MIN,j;
  MIN=A[k];
  LOC=k;
   for(j=k+1;j<=N-1;j++)
    {  if(MIN>A[j])
     {
       MIN=A[j];
       LOC=j;
     }
   }
   return(LOC);
}
