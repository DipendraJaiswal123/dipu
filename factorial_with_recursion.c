#include<stdio.h>
long fact(int);
main()
{
  int x;
  printf("enter a numbers for factorial=");
  scanf("%d",&x);
  printf("factorial is:%ld",fact(x));
 }
long fact(int n)
{
 if(n>0)
 return(n*fact(n-1));
  else
   return(1);
}
