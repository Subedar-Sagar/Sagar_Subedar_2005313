#include<stdio.h>
#include<string.h>

void main()
{
  int i,fact=1;
  int num=5;
  for(i=1;i<=num;i++)
  {
    fact=fact*i;
  }
  printf("factorial of %d is %d",num,fact);
}
