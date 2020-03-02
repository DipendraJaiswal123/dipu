#include<stdio.h>
void Binary_Search(int [],int,int);
int main()
{
  int i,n,item,A[100];
  printf("Enter the no.of elements: ");
  scanf("%d",&n);
  printf("\nEnter the sorted list of elements:\n");
  for(i=0;i<=n-1;i++)
  scanf("%d",&A[i]);
  printf("\nYou entered:");
  for(i=0;i<=n-1;i++)
  printf(" %d",A[i]);
  printf("\n\nEnter the element to be searched:");
  scanf("%d",&item);
  Binary_Search(A,n,item);
}
void Binary_Search(int A[],int N,int KEY)
{
  int LB=0,UB=N-1,MID;
    while(LB<=UB)
    {
       MID=(LB+UB)/2;
       if(KEY==A[MID])
          {
            printf("\nSearch Successfully,element found at location %d",MID+1);
            return;
          }
           else if(KEY>A[MID])
             {
               LB=MID+1;
              }
                else
                 UB=MID-1;
      }

          printf("\nSearch Unsuccessful,element not found!!!.");

}
