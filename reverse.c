#include<stdio.h>
void main()
 {
 int num,n,rev=0,temp;
 printf("enter a number:");
 scanf("%d",&num);
 temp = num;
  while(num>0)
   {
   n=num%10;
   rev=rev*10+n;
   num=num/10;
   }
  printf("The reversed number is : %d",rev);
   rev = rev+10;
  printf("\nThe reversed number +\t10 = %d",rev);
  }
