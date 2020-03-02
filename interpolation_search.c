#include<stdio.h>
int main()
{
  int A[]={11,22,33,44,55,66,77,88,99,100};
  interpolation_search(A,9);
}
void interpolation_search(int A[],int data)
{
   int low=0,mid,high=sizeof(A)-1;
   while(low<=high)
   {
     mid=low+(((data-A[low])*(high-low))/(A[high]-A[low]));
     if(data==A[mid])
     {
     printf("search successful at position %d",mid+1);
     return;
     }
     else if(A[mid]>data)
     high=mid-1;
     else
     low=mid+1;
   }
   return -1;


}
