#include<stdio.h>
int main()
{
   int A[]={11,22,33,44,55,66,77,88,99};
   linear_search(A,8,10);
}
linear_search(int A[], int N, int data)
{
  int i;
  for(i=0;i<N;i++)
  {
    if(A[i]==data)
     printf("search successfully data found at position %d",i);

   }
  printf("search unsuccessful");
}
