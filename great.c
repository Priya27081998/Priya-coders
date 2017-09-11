#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter three different values/n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c)
 {
  printf("a is greater than b and c");
  }
  elseif(b>a&&b>c)
{
 printf("b is greater than a and c");
 }
elseif(c>a&&c>b)
{
 printf("c is greater than a and b");
 }
return 0;
}
