#include<stdio.h>
#define MAX 5
 int stack[MAX];
 int top =-1;
 void push()
  {
   int value;
   if(top==MAX-1)
    {
     printf("Stack overflow\n");
    }
   else
    {
    printf("Enter the value:\n");
    scanf("%d",&value);
    top=top+1;
    stack[top]=value;
    printf("Value inserted successfully");
    }
   }
  void pop()
   {
   if(top==-1)
     {
     printf("Stack underflow\n");
     }
    else{
     printf("Deleted value:%d\n",stack[top]);
     top--;
     }
    }
   void display(){
    int i;
    if(top == -1)
     {
     printf("Stack is empty\n");
     }
    else{
     printf("Stack elements:\n");
      for(i=top;i>=0;i--)
       {
        printf("%d\n",stack[i]);
       }
      }
    }
int main()
 {
  int choice;
  while(1){
  printf("\n1.Push\n2.Pop\n3.Display\n4.exit\n");
  printf("Enter your choice:\n");
  scanf("%d",&choice);
  switch(choice){
   case 1:
      push();
      break;
   case 2:
      pop();
      break;
   case 3:
      display();
      break;
   case 4:
      return 0;
   default:
      printf("Invalid choice\n");
     }
    }
 }   
         
    
   
