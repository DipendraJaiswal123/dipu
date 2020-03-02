#include<stdio.h>
/*#define LEFT 0
#define RIGHT 1*/
int main()
{
   int A[5]={1,2,3,4,5};
   display(A,5);
   Array_rotation(A,5,4);
   display(A,5);
   return 0;
}
void display(int A[],int N)
{
int i;
  printf("\n");
  for(i=0;i<=4;i++)
  printf(" %d",A[i]);
}
void Array_rotation(int A[],int N,int k)
{
  int temp,i;
    while(k>0)
    {
     temp=A[0];
     for(i=1;i<=N-1;i++)
      A[i-1]=A[i];
      A[N-1]=temp;
      k--;
    }
  }

