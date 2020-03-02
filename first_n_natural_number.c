#include<stdio.h>
int print(int);
void main()
{

  print(100);

}
int print(int N)
{
 if(N>=1)
  {
    print(N-1);
    printf(" %d",N);
  }
}
