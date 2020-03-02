#include<stdio.h>
int sum_square(int);
void main()
{

printf("sum of square of 6 is %d",sum_square(6));


}
int sum_square(int n)
{
 if(n==1)
  return(1);
  return(n*n+sum_square(n-1));
}
