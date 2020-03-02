#include<stdio.h>
binary_search(int [],int ,int ,int );
int main()
{
  int A[]={11,22,33,44,55,66,77,88,99,100};
  binary_search(A,0,9,100);
}
int binary_search(int A[],int low,int high,int data)
{
  int mid=(low+high)/2;
  if(low>high)
  return -1;
  if(A[mid]==data)
  printf("search successfully at position %d",mid+1);
  else if(A[mid]<data)
  return binary_search(A,mid+1,high,data);
  else return binary_search(A,low,mid-1,data);
  return -1;
 }
