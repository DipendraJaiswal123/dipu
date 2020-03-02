#include<stdio.h>
int sum_even(int );
void main()
{
 int k;
 printf("enter a any natural numbers");
 scanf("%d",&k);
  printf("sum of odd numbers is%d",sum_even(k));
}
int sum_even(int N)
{
 if(N==1)
  return(2);
   else
   return(2*N+sum_even(N-1));
}
