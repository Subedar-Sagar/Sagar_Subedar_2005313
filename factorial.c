#include<stdio.h>
#include<string.h>

void main()
{
  int i,fact=1;
  int num=5;
  if(num==1 || num==0)
  {
    fact=1;
  }
  else if(num<0)
  {
    printf("Invalid Number");
  }
  
  else
  {
    for(i=1;i<=num;i++)
      {
        fact=fact*i;
      }
  }
 printf("factorial of %d is %d",num,fact);
}
