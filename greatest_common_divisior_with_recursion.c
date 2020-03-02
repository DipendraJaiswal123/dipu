#include<stdio.h>
int GCD(int,int);
main()
{
 int x,y;
 printf("enter two numbers for GCD:");
 scanf("%d%d",&x,&y);
 printf("GCD IS %d",GCD(x,y));
}
int GCD(int a,int b)
{
 if(a==b)
 return(a);
 if(a%b==0)
 return(b);
 if(b%a==0)
 return(a);
 if(a>b)
 return(GCD(a%b,b));
 else
 return(GCD(a,b%a));
}
