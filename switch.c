#include<stdio.h>
void main()
 {
 int a,b;
 char op;
 printf("\tSimple calculator\n");
 printf("\t-----------------\n");
 printf("Enter the first number :");
 scanf("%d",&a);
 printf("Enter the second number :");
 scanf("%d",&b);
 printf("Select the operator:");
 printf("\n 1.+\n 2.-\n 3.*\n 4./ \n");
 scanf(" %c",&op); 
 switch(op)
 {
  case '+':
   int sum = a+b;
   printf("Sum = %d\n",sum);
   break;
  case '-':
   int diff = a-b;
   printf("Difference = %d\n",diff);
   break;
  case '*':
   int prod = a*b;
   printf("Product = %d\n",prod);
   break;
  case '/':
   int div = a/b;
   printf("division = %d\n",div);
   break;
  default:
    printf("Invalid operation");
    break;
 }
}
   
