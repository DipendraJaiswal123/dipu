#include<stdio.h>
int sum_cube(int);
main()
{

  printf("sum of cube of 7 is %d",sum_cube(7));


}
 int sum_cube(int x)
 {
  if(x==1)
  return(1);
   else
   return(x*x*x+sum_cube(x-1));

 }
