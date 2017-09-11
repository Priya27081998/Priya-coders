#include<stdio.h>
int main()
{
 int year;
 printf("enter a year:");
 scanf("%d",&year);
 if(year%400==0)
 {
  printf("leap year");
  }
 elseif(year%100==0)
 {
  printf("not a leap year");
  }
 return 0;
 }
