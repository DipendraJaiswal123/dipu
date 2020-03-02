#include<stdio.h>
int sumcube(int);
main()
{
 int x;
 printf("enter a numbers for sum of cubes of first any n natural numbers:");
 scanf("%d",&x);
 printf("sum is %d",sumcube(x));
}
int sumcube(int n)
{
 if(n==1)
 return(1);
else
return(n*n*n+sumcube(n-1));
}
