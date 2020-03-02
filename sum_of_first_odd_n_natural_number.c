#include<stdio.h>
int sum_odd(int);
void main()
{
 int x;
 printf("enter a any natural numbers");
 scanf("%d",&x);
  printf("sum of odd natural number is %d",sum_odd(x));
}
int sum_odd(int N)
{
  if(N==1)
  return(1);
  else
  return((2*N-1)+sum_odd(N-1));
}
