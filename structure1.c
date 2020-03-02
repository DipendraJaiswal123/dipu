#include<stdio.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};
void main()
{
 struct book b1;
 b1=input();
 display(b1);
}
struct book input()
{
 struct book b;
 printf("enter bookid,title and price");
 scanf("%d",&b.bookid);
 fflush(stdin);
 gets(b.title);
 scanf("%f",&b.price);
 return(b);
}
void display(struct book b)
{

  printf("%d%s%f",b.bookid,b.title,b.price);

}
