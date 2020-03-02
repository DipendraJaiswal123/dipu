#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],b[20],result[25];
  int i,j,carry=0,length1,length2,sum,k;
  printf("\nEnter the fisrt very long integer: ");
  scanf("%s",a);
  printf("\nEnter the second very long integer: ");
  scanf("%s",b);
  length1=strlen(a);
  length2=strlen(b);
  i=length1-1;
  j=length2-1;
  k=length1>length2?length1:length2;
  result[k]='\0';
  k--;
  while(i>=0&&j>=0)
  {
    sum=(a[i]-48)+(b[j]-48)+carry;
    result[k]=sum%10+48;
    carry=sum/10;
    i--;
    j--;
    k--;
  }
  if(i>=0)
  {
    while(i>=0)
    {
      sum=a[i]-48+carry;
      result[k]=sum%10+48;
      carry=sum/10;
      i--;
      k--;
    }
  }
  else if(j>=0)
  {
    while(j>=0)
    {
     sum=b[j]-48+carry;
     result[k]=sum%10+48;
     carry=sum/10;
     j--;
     k--;
    }
  }
  if(carry>0)
  {
    for(i=strlen(result);i>=0;i--)
    result[i+1]=result[i];
    result[0]=carry+48;
  }
  printf("\n Sum=%s",result);
}
