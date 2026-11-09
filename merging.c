#include<stdio.h>
void main()
 {
 int m,n;
 int i=0,j=0,k=0;
 int c[100];
 printf("Enter the size of the first array:");
 scanf("%d",&m);
 int a[m];
 printf("Enter the elements in sorted order:\n");
 for(i=0;i<m;i++)
  {
  scanf("%d",&a[i]);
  }
 printf("Enter the size of the second array:");
 scanf("%d",&n);
 int b[n];
 printf("Enter the elements in the sorted order:\n");
 for(j=0;j<n;j++)
  {
  scanf("%d",&b[j]);
  }
  i=0;
  j=0;
  while(i<m && j<n)
   {
     if(a[i]<=b[i])
      {
        c[k++]=a[i++];
      }
     else
      {
       c[k++]=b[j++];
      }
    }
  while(i<m)
   {
     c[k++] =a[i++];
   }
   while(j<n)
    {
      c[k++] = b[j++];
    }
    printf("Merged Array is:\n");
     for(i=0;i<k;i++)
       {
       printf("%d\n",c[i]);
       }
       printf("\n");
       
 }
