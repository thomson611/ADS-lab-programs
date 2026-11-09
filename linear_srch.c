#include<stdio.h>
void main()
 {
  int n,x,flag=0;
  printf("Enter the limit :");
  scanf("%d",&n);
  int a[n];
  printf("Enter the numbers: ");
   for(int i= 0;i<n;i++)
    {
    scanf("%d", &a[i]);
    }
    printf("Array elements:\n");
   for(int i= 0;i<n;i++)
    {
    printf("%d \t",a[i]);
    }
   printf("\nEnter the element to search:");
   scanf("%d",&x);
   for(int i=0;i<n;i++)
    {
     if(x==a[i])
     {
      printf("%d is found in the array at position %d ",x,i);
      flag=1;
      break;
     }
    }
    if(flag==0)
      printf("%d is not a member of the array",x);
  }
  
