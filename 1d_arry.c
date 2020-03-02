#include<stdio.h>
int main()
{
  int i,maximum=0,mark[10];
  int sn=1;
  for(i=0;i<=9;i++)
   {
     printf("students no.%d",sn++);
     printf("\nmarks obtained out of 50:");
     scanf("%d",&mark[i]);

   }

   for(i=0;i<=9;i++)
   {
    if(mark[i]>maximum)
    maximum=mark[i];
    }

      printf("Maximum marks is %d\n",maximum);
}
