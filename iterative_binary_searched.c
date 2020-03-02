#include<stdio.h>
void binary_searched(int [],int,int);
int main()
{
  int k,w,i,A[100];
  printf("Enter the No.of arrays");
  scanf("%d",&w);
  printf("\nEnter the elements in the arrays:");
  for(i=0;i<w;i++)
  scanf("%d",&A[i]);
  printf("\nEnter the element to be searched:");
  scanf("%d",&k);
  binary_searched(A,w,k);
}
void binary_searched(int A[],int N,int data)
{
  int mid;
  int low=0;
  int high=N-1;
  while(low<=high)
  {
     mid=(low+high)/2;
    if(A[mid]==data)
    {

    printf("search successfull data found at position %d",mid+1);
    return;
    }
    else if(A[mid]<data)
    low=mid+1;
    else
    high=mid-1;
  }
  printf("searched unsuccessful");
}
