#include<stdio.h>
int sum(int);
main()
{
 int x;
 printf("enter a numbers:");
 scanf("%d",&x);
 printf("sum is %d",sum(x));
}

int sum(int a)
{
  if(a/10==0)//if(a==0)
  return(a);//return(0);
 else
 return(a%10+sum(a/10));

}
