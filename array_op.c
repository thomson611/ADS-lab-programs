#include<stdio.h>
void main()
 {
 int n;
 printf("Enter the size of the array:\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the arry elements:\n");
 for(int i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("Array Elements are:\n");
 for(int i=0;i<n;i++)
  {
   printf("%d\t",arr[i]);
  }
  int choice,opt;
 do{
 printf("Enter your choice:\n");
 printf("1.sort\t 2.search\n");
 
  switch(choice){
     case 1:
        sort(arr,n);
        break;
   }
  }while(opt=='y'||opt=='Y');
 }
 void sort(int a[],int size)
  {
   int temp;
    for(int i=0;i<size;i++)
     {
      for(int j=0;j<i;j++)
       {
       if(a[j] < a[j+1])
        { 
         temp = a[j+1];
         a[j+1] = a[j];
         a[j] = temp;
        }
       }
      }
    }
