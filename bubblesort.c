#include<stdio.h>
void bubbleSort(int arr[],int size)
 {
    int temp;
    for(int i=0;i<size;i++)
     {
      for(int j=0;j<i;j++)
       {
       if(arr[j]>arr[j+1])
        { 
         temp = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = temp;
        }
       }
     }
 }
void main()
 {
 int size,i;
 printf("Enter the size of the array:\n");
 scanf("%d",&size);
 int arr[size];
 printf("\nEnter the array elements:\n");
 for(i=0;i<size;i++)
  {
  scanf("%d",&arr[i]);
  }
bubbleSort(arr,size);
printf("Sorted array:");
 for(i=0;i<size;i++)
  {
  printf("%d\n",arr[i]);
  }
}
