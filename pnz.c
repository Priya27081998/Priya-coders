#include<stdio.h>
void main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 if(num>0)
 {
  printf("you have entered a positive number");
  }
  else if(num<0)
  {
   printf("you have entered a negative number");
    }
     else(num=0)
     {
      printf("you have entered zero");
      }
      return 0;
      }
