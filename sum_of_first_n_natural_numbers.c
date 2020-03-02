#include<stdio.h>
int sum(int);
main()
{
 int x;
 printf("enter a number for sum of first any natural numbers");
 scanf("%d",&x);

   printf("sum is %d",sum(x));
}
int sum(int N)
{
 if(N==1)
  return(1);
   else
   return(N+sum(N-1));
}
