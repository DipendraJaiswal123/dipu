#include<stdio.h>
int square(int);
void main()
{
  int x;
  printf("enter a number");
  scanf("%d",&x);
  printf("sum of square of digit is%d",square(x));

}
 int square(int n)
 {
   if(n%10==0)
   return(n*n);
   else
   return((n%10)*(n%10)+square(n/10));

 }
