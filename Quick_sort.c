 #include<stdio.h>
 void quick_sort(int [],int);
 void quick(int [],int, int,int,int *);
 int main()
{
  int A[50];
  int i,n;
  printf("Enter the no.of element:");
  scanf("%d",&n);
  printf("Enter the element:\n");
  for(i=0;i<=n-1;i++)
  scanf("%d",&A[i]);
  /*printf("\nBefore sorying arrays:");
  for(i=0;i<=n-1;i++)
  printf(" %d",A[i]);*/
  quick_sort(A,n);
  printf("\nArray after merge sorting:");
   for(i=0;i<=n-1;i++)
   printf(" %d",A[i]);
}
void quick_sort(int A[], int N)
{
  int BEG,END,LOC,TOP=-1;
  int LOWER[10],UPPER[10];

    if(N>1)
     {
       TOP++;
       LOWER[TOP]=0;
       UPPER[TOP]=N-1;
     }

   while(TOP!=-1)
    {
      BEG=LOWER[TOP];
      END=UPPER[TOP];
      TOP--;
      quick(A,N,BEG,END,&LOC);

       if(BEG<LOC-1)
        {
          TOP++;
          LOWER[TOP]=BEG;
          UPPER[TOP]=LOC-1;
         }

         if(LOC+1<END)
          {
            TOP++;
            LOWER[TOP]=LOC+1;
            UPPER[TOP]=END;
          }

      }
}
 void quick(int A[], int N, int BEG, int END,int *LOCPTR)
{
  int LEFT,RIGHT,temp;
  LEFT=BEG; RIGHT=END;
  *LOCPTR=BEG;
 step2:
   while(A[*LOCPTR]<=A[RIGHT]&&*LOCPTR!=RIGHT)
      RIGHT--;
   if(*LOCPTR==RIGHT)
     return;
   if(A[*LOCPTR]>A[RIGHT])
    {
      temp=A[*LOCPTR];
      A[*LOCPTR]=A[RIGHT];
      A[RIGHT]=temp;
      *LOCPTR=RIGHT;
    }
 goto step3;
 step3:
  while(A[LEFT]<=A[*LOCPTR]&&LEFT!=*LOCPTR)
      LEFT++;
   if(LEFT==*LOCPTR)
     return;
   if(A[LEFT]>A[*LOCPTR])
    {
      temp=A[LEFT];
      A[LEFT]=A[*LOCPTR];
      A[*LOCPTR]=temp;
      *LOCPTR=LEFT;
    }
 goto step2;
}

