#include<stdio.h>
void print(int);
void main()
{

 print(100);


}
 void print(int n)
 {
  if(n>=1)
  {
    printf(" %d",n);
    print(n-1);

  }
 }
