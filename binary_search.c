#include<stdio.h>
void main()
 {
 int binarysearch(int arr[],int size,int search)
  {
  int low=0,hig=size-1;
   while(low<=high)
    {
    int mid = high+low/2;
     if(arr[mid]==search)
       return mid;
     else if(arr[mid]<search)
       low = mid+1;
     else
     high = mid-1;
     return-1;
    }
}
