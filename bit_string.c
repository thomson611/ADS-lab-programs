#include<stdio.h>
 void bitString(int set[], int n)
 {
   int i;
   printf("Bit string representation:");
   for(i = 0;i<n;i++)
    {
     printf("%d",set[i]);
    }
   printf("\n");
 }
 void display(int set[], int n)
  {
   int i,found=0;
   printf("\nElements present in the set:");
    for(i=0;i<n;i++)
     {
      if(set[i]==1)
       {
        printf("%d",i+1);
        found=1;
       }
     }
     printf("\n");
  }
 int main()
  {
    int set[100],n,i;
    printf("Enter the number of bits:");
    scanf("%d",&n);
    printf("Enter the bit string (0 or 1):");
     for(i=0;i<n;i++)
      {
      scanf("%d",&set[i]);
      }
    bitString(set,n);
    display(set, n);
    return 0;
  } 
