#include<stdio.h>
void main()
 {
  int n;
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
  }
  
