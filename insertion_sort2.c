#include<stdio.h>
 void insertion_sort(int [],int);
int main()
{
  int i,A[30],n;
  printf("Enter the no.of elements:");
  scanf("%d",&n);
  printf("\nEnter the element of array for sorting:\n");
  for(i=0;i<=n-1;i++)
  scanf("%d",&A[i]);
  printf("\nBefore sorting array:");
  for(i=0;i<=n-1;i++)
  printf(" %d",A[i]);
  insertion_sort(A,n);
  printf("\nAfter sorting arrays:");
   for(i=0;i<=n-1;i++)
    printf(" %d",A[i]);
}
 void insertion_sort(int A[], int N)
{
   int i,j,temp;
    for(i=1;i<=N;i++)
    { temp=A[i];
       j=i-1;
       while(j>=0&&A[j]>temp)
          {A[j+1]=A[j];
            j--;
            }
       A[j+1]=temp;
    }
}
