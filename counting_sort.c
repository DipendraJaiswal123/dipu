#include<stdio.h>
int counting_sort(int A[],int n,int B[],int k);
void main()
{
  int A[]={5,9,4,5,3,6,8,5,4,8,7,4,6,9,7};
  int B[15];
  int k=10;
  int n=15;
  int i;
  counting_sort(A,n,B,k);
  for(i=0;i<n;i++)
  printf(" %d",B[i]);
}
int counting_sort(int A[],int n,int B[],int k)
{
  int i,j,C[k];
  for(i=0;i<k;i++)
  C[i]=0;
  for(j=0;j<n;j++)
  C[A[j]]=C[A[j]]+1;
  for(i=1;i<k;i++)
  C[i]=C[i]+C[i-1];
  for(j=n-1;j>=0;j--)
  {
     B[C[A[j]]-1]=A[j];
     C[A[j]]=C[A[j]]-1;
  }
}
