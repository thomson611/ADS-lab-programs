#include<stdio.h>
void main()
 {
  float x,y,sum,sub,prod,div;
  printf("\t\t CALCULATOR \n");
  printf("\t\t ----------- \n");
  printf("enter two numbers: ");
  scanf("%f %f", &x,&y);
  sum = x+y;
  sub = x-y;
  prod = x*y;
  div = x/y;
  printf("\t\n Results :");
  printf("\t\n----------:");
  printf("\n Sum : %f+ %f = %f",x,y,sum);
  printf("\n Difference : %f - %f = %f",x,y,sub);
  printf("\n Product : %f * %f = %f",x,y,prod);
  printf("\n Division : %f / %f = %f",x,y,div);
 
  }
