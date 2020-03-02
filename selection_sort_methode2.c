#include<stdio.h>
int main()
{
  int i,j,temp;
  int A[]={21,23,12,43,34,56,54,23,45,32,34,65,76,56};
   printf("Arrays before sorting:");
    for(i=0;i<=13;i++)
    printf(" %d",A[i]);
  for(i=0;i<=12;i++)
  {
   for(j=i+1;j<=13;j++)
   {
     if(A[i]>A[j])
      {
       temp=A[i];
       A[i]=A[j];
       A[j]=temp;
      }
   }

  }
 printf("\n Arrays after selection sorting:");
  for(i=0;i<=13;i++)
  printf(" %d",A[i]);
}
